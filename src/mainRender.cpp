

#include <math.h>
#include <iostream>
#include <numeric>
#include <thread>
#include <atomic>
#include <chrono>
#include <inttypes.h>
#include <getopt.h>

#include "mainRender.h"
#include <glfw3.h>
#include <filesystem>


// keyboard callback
void keyboard(GLFWwindow* window, int key, int scancode, int act, int mods) {
    // backspace: reset simulation
    if (act == GLFW_PRESS && key == GLFW_KEY_BACKSPACE) {
        mj_resetData(m, d);
        mj_forward(m, d);
    }
}

// mouse button callback
void mouse_button(GLFWwindow* window, int button, int act, int mods) {
    // update button state
    button_left =
        (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS);
    button_middle =
        (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_MIDDLE) == GLFW_PRESS);
    button_right =
        (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT) == GLFW_PRESS);

    // update mouse position
    glfwGetCursorPos(window, &lastx, &lasty);
}

// mouse move callback
void mouse_move(GLFWwindow* window, double xpos, double ypos) {
    // no buttons down: nothing to do
    if (!button_left && !button_middle && !button_right) {
        return;
    }

    // compute mouse displacement, save
    double dx = xpos - lastx;
    double dy = ypos - lasty;
    lastx = xpos;
    lasty = ypos;

    // get current window size
    int width, height;
    glfwGetWindowSize(window, &width, &height);

    // get shift key state
    bool mod_shift = (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS ||
                      glfwGetKey(window, GLFW_KEY_RIGHT_SHIFT) == GLFW_PRESS);

    // determine action based on mouse button
    mjtMouse action;
    if (button_right) {
        action = mod_shift ? mjMOUSE_MOVE_H : mjMOUSE_MOVE_V;
    } else if (button_left) {
        action = mod_shift ? mjMOUSE_ROTATE_H : mjMOUSE_ROTATE_V;
    } else {
        action = mjMOUSE_ZOOM;
    }

    // move camera
    mjv_moveCamera(m, action, dx / height, dy / height, &scn, &cam);
}

// scroll callback
void scroll(GLFWwindow* window, double xoffset, double yoffset) {
    // emulate vertical mouse motion = 5% of window height
    mjv_moveCamera(m, mjMOUSE_ZOOM, 0, -0.05 * yoffset, &scn, &cam);
}

void InitVisualization(mjModel* task_m, mjData* task_d, bool fixed) {
    m = task_m;
    d = task_d;

    // init GLFW
    if (!glfwInit()) {
        mju_error("Could not initialize GLFW");
    }

    // create window, make OpenGL context current, request v-sync
    // GLFWwindow* window = glfwCreateWindow(1200, 900, "Demo", NULL, NULL);
    window = glfwCreateWindow(1200, 900, "Demo", NULL, NULL);
    std::cout << "WINDOW1:";
    std::cout << glfwWindowShouldClose(window) << std::endl;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    // initialize visualization data structures
    mjv_defaultCamera(&cam);

    // Select the camera defined in the XML model, e.g., "track"
    int cam_id = mj_name2id(m, mjOBJ_CAMERA, "track");
    if (cam_id >= 0) {
        if(fixed){
            cam.type = mjCAMERA_FIXED;  
        }
        cam.fixedcamid = cam_id;
        std::cout << "Using fixed camera: track (id " << cam_id << ")" << std::endl;
    } else {
        std::cerr << "Camera named 'track' not found in the model." << std::endl;
    }


    mjv_defaultOption(&opt);
    mjv_defaultScene(&scn);
    mjr_defaultContext(&con);

    // create scene and context
    mjv_makeScene(m, &scn, 2000);
    mjr_makeContext(m, &con, mjFONTSCALE_150);

    // install GLFW mouse and keyboard callbacks
    glfwSetKeyCallback(window, keyboard);
    glfwSetCursorPosCallback(window, mouse_move);
    glfwSetMouseButtonCallback(window, mouse_button);
    glfwSetScrollCallback(window, scroll);

    std::cout << "WINDOW2:" << glfwWindowShouldClose(window) << std::endl;
}

void StepVisualization(bool isRenderVideoSaved, const char* filePath) {
    // Get framebuffer viewport
    mjrRect viewport = {0, 0, 0, 0};
    glfwGetFramebufferSize(window, &viewport.width, &viewport.height);

    // Update scene and render
    mjv_updateScene(m, d, &opt, NULL, &cam, mjCAT_ALL, &scn);
    mjr_render(viewport, &scn, &con);

    if(isRenderVideoSaved){
        // Save the current frame
        char filename[256];
        sprintf(filename, "%s/frame_%04d.png", filePath, frame_count);
        saveFrame(viewport.width, viewport.height, filename);
        frame_count++;
    }


    // Swap OpenGL buffers (blocking call due to v-sync)
    glfwSwapBuffers(window);

    // Process pending GUI events, call GLFW callbacks
    glfwPollEvents();
}

void saveFrame(int width, int height, const char* filename) {
    // Allocate memory to store the pixels
    unsigned char* pixels = (unsigned char*)malloc(3 * width * height);
    if (!pixels) {
        std::cerr << "Failed to allocate memory for image capture." << std::endl;
        return;
    }

    // Read pixels from the OpenGL framebuffer
    glReadPixels(0, 0, width, height, GL_RGB, GL_UNSIGNED_BYTE, pixels);

    // Flip the image vertically (OpenGL's origin is bottom-left)
    for (int y = 0; y < height / 2; ++y) {
        for (int x = 0; x < width * 3; ++x) {
            std::swap(pixels[y * width * 3 + x], pixels[(height - 1 - y) * width * 3 + x]);
        }
    }

    // Save the image using stb_image_write
    stbi_write_png(filename, width, height, 3, pixels, width * 3);

    // Free the allocated memory
    free(pixels);
}

void printUsage(const char* programName) {
    std::cout
        << "Usage: " << programName << " [options]\n\n"
        << "Options:\n"
        << "  -d <dotFile>              Dot file of the individual tested\n"
        << "  -s <seed>                 Random seed (default: 0)\n"
        << "  -p <jsonFile>             Parameter file (default: params_0.json)\n"
        << "  -u <useCase>              MuJoCo use case (default: 'hopper')\n"
        << "  -x <xmlFile>              MuJoCo XML file (default: 'mujoco_models/<usecase>.xml'\n"
        << "  -v <speedRender>          Type of render: 0-default speed, 1-fast speed, 2-no visual(so super fast!) (default: 0)\n"
        << "  -z <cameraFixed>          Camera is fixed on the agent by default (default: true)\n"
        << "  -f <pathVideo>            Save the render video if a folder path is given (default: '')\n"
        << "  -c <genCode>              Generate C code of the individual, used notably for interpretability (default: 'false')\n"
        << "  -d <printData>            Generate a csv file of the action/states values of the episode (default: 'false')\n"
        << "  -h                        Display this help message\n";
}

int main(int argc, char ** argv) {
    
    char option;
	char dotPath[150];
    char paramFile[150];
    bool isRenderVideoSaved = false;
    char pathRenderVideo[150];
	char xmlFile[150];
	char usecase[150];
    uint64_t seed=0;
	size_t fastVisu = 0;
    bool fixed = 1;
    bool saveCodeGen = 0;
    bool printData = 0;

    strcpy(dotPath, "");
    strcpy(paramFile, "params_0.json");
    strcpy(pathRenderVideo, "");
	strcpy(usecase, "hopper");
    strcpy(xmlFile, "none");
    while((option = getopt(argc, argv, "d:s:p:u:x:v:z:f:c:e:h:")) != -1){
        switch (option) {
            case 'd': strcpy(dotPath, optarg); break;
            case 's': seed= atoi(optarg); break;
            case 'p': strcpy(paramFile, optarg); break;
			case 'u': strcpy(usecase, optarg); break;
            case 'x': strcpy(xmlFile, optarg); break;
			case 'v': fastVisu = atoi(optarg); break;
            case 'z': fixed = atoi(optarg); break;
            case 'f': strcpy(pathRenderVideo, optarg); break;
			case 'c': saveCodeGen = atoi(optarg); break;
			case 'e': printData = atoi(optarg); break;
			case 'h': printUsage(argv[0]); return 0;
            default: 
                std::cerr << "Error: invalid command-line option.\n\n";
                printUsage(argv[0]);
                exit(1);
        }
    }
    if(strcmp(xmlFile, "none") == 0){
    	snprintf(xmlFile, sizeof(xmlFile), "mujoco_models/%s.xml", usecase);
	}
    std::string dotFileName = std::filesystem::path(dotPath).stem().string();
    std::string dotDir = std::filesystem::path(dotPath).parent_path().string();

    std::cout<<"\n"<<dotDir<<"  "<<dotFileName<<std::endl;

	std::cout << "Start Mujoco Rendering application with seed " << seed<<"." << std::endl;
    // Create the instruction set for programs
	Instructions::Set set;
	fillInstructionSet(set);

	// Set the parameters for the learning process.
	// (Controls mutations probability, program lengths, and graph size
	// among other things)
	// Loads them from the file params.json
	Learn::LearningParameters params;
	File::ParametersParser::loadParametersFromJson(paramFile, params);

	// Instantiate the LearningEnvironment
	MujocoWrapper* mujocoLE = nullptr;
	if(strcmp(usecase, "humanoid") == 0){
		mujocoLE = new MujocoHumanoidWrapper(xmlFile);
	} else if (strcmp(usecase, "half_cheetah") == 0) {
		mujocoLE = new MujocoHalfCheetahWrapper(xmlFile);
	} else if (strcmp(usecase, "hopper") == 0) {
		mujocoLE = new MujocoHopperWrapper(xmlFile);
	} else if (strcmp(usecase, "walker2d") == 0) {
		mujocoLE = new MujocoWalker2DWrapper(xmlFile);
	} else if (strcmp(usecase, "reacher") == 0) {
		mujocoLE = new MujocoReacherWrapper(xmlFile);
	} else if (strcmp(usecase, "inverted_double_pendulum") == 0) {
		mujocoLE = new MujocoDoublePendulumWrapper(xmlFile);
	} else if (strcmp(usecase, "ant") == 0) {
		mujocoLE = new MujocoAntWrapper(xmlFile);
	} else {
		throw std::runtime_error("Use case not found, available are 'humanoid','half_cheetah','hopper','walker2d','inverted_double_pendulum','reacher','ant'");
	}

	// Instantiate and init the learning agent
	Learn::ParallelLearningAgent la(*mujocoLE, set, params);

    auto &tpg = *la.getTPGGraph();
    Environment env(set, params, mujocoLE->getDataSources(), mujocoLE->getNbActions());

    File::TPGGraphDotImporter dotImporter(dotPath, env, tpg);

    if(tpg.getNbRootVertices() > 1){
        
        std::cout<<"Multiple roots identified. One generation training launched to identified the best root"<<std::endl;
        // Basic logger
        Log::LABasicLogger basicLogger(la);
		auto results = la.evaluateAllRoots(0, Learn::LearningMode::TRAINING);
        // Update the best
        la.getSelector()->updateEvaluationRecords(results);
        // Keep best policy
        la.getSelector()->keepBestPolicy();

        auto iter = results.begin();
        std::advance(iter, results.size() - 1);


        char bestDot[250];
        // Export the graph    
        strncpy(bestDot, dotPath, strstr(dotPath, ".dot") - dotPath);
        strcat(bestDot, ".best.dot");
	    File::TPGGraphDotExporter dotExporter(bestDot, *la.getTPGGraph());
        dotExporter.print();
        std::cout<<"Save best root in "<<bestDot<<std::endl;

    }

    // Print graph
    if(saveCodeGen){
        std::string codeGenPath = dotDir + "/codeGen/";
        if(!std::filesystem::exists(codeGenPath)){
            std::filesystem::create_directory(codeGenPath);
        }

        std::cout << "Printing C code." << std::endl;
        CodeGen::TPGGenerationEngineFactory factory(CodeGen::TPGGenerationEngineFactory::switchMode);
        std::unique_ptr<CodeGen::TPGGenerationEngine> tpggen = factory.create(dotFileName, tpg, codeGenPath);
        tpggen->generateTPGGraph();
    }



    std::cout<<mujocoLE->m_->opt.timestep<<" "<<mujocoLE->frame_skip_<<std::endl;
    double frameDuration = mujocoLE->m_->opt.timestep * mujocoLE->frame_skip_; // en secondes
    int frameDelayMs = static_cast<int>(frameDuration * 1000); // en millisecondes

    if(!(strcmp(pathRenderVideo, "") == 0)) {
        isRenderVideoSaved = true;
    }

    if(fastVisu != 2){
        InitVisualization(mujocoLE->m_, mujocoLE->d_, fixed);
        StepVisualization(isRenderVideoSaved, pathRenderVideo);
    }

    mujocoLE->reset(seed, Learn::LearningMode::TESTING);
    std::vector<double> actions(mujocoLE->getNbActions(), 0);
    uint64_t nbActions = 0;
    TPG::TPGExecutionEngine tee(env, NULL);
    while (!mujocoLE->isTerminal() && nbActions < params.maxNbActionsPerEval) {

        // Get the actions
        std::vector<double> actionsID =
            tee.executeFromRoot(*tpg.getRootVertices()[0]).second;


        // Do it
        mujocoLE->doActions(actionsID);
        if(fastVisu != 2){
            StepVisualization(isRenderVideoSaved, pathRenderVideo);
        }
        if(!isRenderVideoSaved){
            if(fastVisu == 0){
                std::this_thread::sleep_for(std::chrono::milliseconds(frameDelayMs));
            }
        }
        

        // Count actions
        nbActions++;


    }

    if(printData) {
        std::string actionAndStateData = dotDir + "/stateAndActionData" + dotFileName + ".csv";
        mujocoLE->printStateAndAction(actionAndStateData);
    }



    
    std::cout<<"Score: "<<mujocoLE->getUtility()<<std::endl;;
    std::cout<<"Summup actions: ";
    for(auto act: actions){
        std::cout<<act/(double)nbActions<<"-";
    }std::cout<<std::endl;



    if(isRenderVideoSaved){
        int fps = static_cast<int>(1.0 / frameDuration / 2.0);

        // Change size of images and save
        std::string resizeCommand = "ffmpeg -i " + std::string(pathRenderVideo) + "/frame_%04d.png -vf \"scale=1200:844\" " + std::string(pathRenderVideo) + "/resized_frame_%04d.png";
        std::cout << "Executing: " << resizeCommand << std::endl;
        int result = system(resizeCommand.c_str());
        if (result != 0) {
            std::cerr << "Error executing resize command: " << result << std::endl;
        }

        std::string videoCommand = "ffmpeg -y -r " + std::to_string(fps) + " -f image2 -s 1200x844 -i " +
            std::string(pathRenderVideo) + "/resized_frame_%04d.png -vcodec libx264 -crf 25 -pix_fmt yuv420p " +
            std::string(pathRenderVideo) + "/render_" + dotFileName + "_s" +
            std::to_string((uint64_t)std::round(mujocoLE->getScore())) + ".mp4";
        
        std::cout << "Executing: " << videoCommand << std::endl;
        result = system(videoCommand.c_str());
        if (result != 0) {
            std::cerr << "Error executing video generation command: " << result << std::endl;
        }

        std::string cleanupCommand = "rm " + std::string(pathRenderVideo) + "/frame_*.png " + std::string(pathRenderVideo) + "/resized_frame_*.png";
        std::cout << "Executing: " << cleanupCommand << std::endl;
        result = system(cleanupCommand.c_str());
        if (result != 0) {
            std::cerr << "Error executing cleanup command: " << result << std::endl;
        }
    }



    // cleanup
	for (unsigned int i = 0; i < set.getNbInstructions(); i++) {
		delete (&set.getInstruction(i));
	}



}

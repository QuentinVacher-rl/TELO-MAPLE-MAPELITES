# Artifacts for TELO submission: Combining Genetic Programming and Quality-Diversity to Discover Simple and Interpretable Policies for Reinforcement Learning with Continuous Control

## Repository content

This repository contains both the data used in the article and the source code to reproduce the results or test the saved data.

The article tests five configurations of MAPLE on five MuJoCo environments, leading to 25 experiments.

The five configurations are:

* MAPLE using Tournament selection;
* MAPLE using MAP-Elites with FeetContact descriptors;
* MAPLE using MAP-Elites with ActionValues descriptors;
* MAPLE using MAP-Elites with NbInstructions descriptors;
* MAPLE using MAP-Elites with ActionValues and NbInstructions descriptors.

The five MuJoCo environments are:

* Hopper;
* Walker2D;
* Half Cheetah;
* Ant;
* Humanoid.

## Data from the article

The data used in the article is stored in the `article_results` folder and contains the following folders/files:

* `articleLogs`: raw training logs from the training of the five MuJoCo environments. Some logs have been removed, such as the raw archive logs, due to storage constraints;
* `exported_results`: results and figures used in the article;
* `videoLabCompressed`: videos showing the behaviors achieved by MAPLE on the MuJoCo environments;
* `_results.ipynb`: main notebook used to analyze the logs;
* `_resultsMapArchive.ipynb`: secondary notebook specifically designed to map one archive into another (notably used in the appendix);
* `data.csv`: main data extracted from the raw training logs;
* `dataArchive.csv`: archive-specific data extracted from the raw training logs;
* `dataMapElitesMapping.csv`: data used by `_resultsMapArchive.ipynb` to map one archive into another;
* `sumup_rl_results.csv`: data from PPO and SAC training, the DRL methods trained with Stable-Baselines3.

## Reproducing the results

The other files/folders concern the reproduction of the results:

* `bin`: folder where the executables are generated;
* `lib`: folder where the Gegelati and MuJoCo libraries are stored;
* `logs`: folder where the training logs are output by default;
* `mujoco_models`: folder where the XML files for the MuJoCo agent models are stored;
* `scripts`: folder containing scripts to install Gegelati, MuJoCo, and the MuJoCo renderer;
* `src`: source code;
* `.gitignore`;
* `.CMakeLists.txt`;
* `params_0.json`: parameter file used by Gegelati, already configured with the parameters necessary to reproduce the results;
* `README.md`: this file.

The results have only been obtained on Linux, so we have not tested the code on macOS or Windows. Gegelati is cross-platform, but compatibility issues may arise with MuJoCo.

### Build tools

The build process of GEGELATI relies on [cmake](https://cmake.org) to configure a project for a wide variety of development environments and operating systems. Install [cmake](https://cmake.org/download/) on your system before building the library.

```shell
git clone https://github.com/QuentinVacher-rl/TELO-MAPLE-MAPELITES.git
cd TELO-MAPLE-MAPELITES
./scripts/install_gegelati.sh
./scripts/install_mujoco.sh
```

Then, you can compile the project using CMake:

```shell
cd bin
cmake -DCMAKE_BUILD_TYPE=Release ..  
cmake --build .
cd ..
```

Two executables should be generated in `bin/Release`:

* `mujoco`: for training MAPLE on MuJoCo;
* `renderMujoco`: for testing and rendering trained individuals.

## Reproducing the results

The `mujoco` executable can be run with the following options:

```shell
./bin/Release/mujoco -h help
Usage: ./bin/Release/mujoco [options]

Options:
  -s <seed>                 Random seed (default: 0)
  -p <jsonFile>             Parameter file (default: params_0.json)
  -l <folder>               Logs folder (default: logs)
  -u <useCase>              MuJoCo use case (default: 'hopper')
  -x <xmlFile>              MuJoCo XML file (default: 'mujoco_models/<usecase>.xml')
  -g <saveAllGenDotFiles>   Save all generation DOT files, can be expensive for memory on long trainings (default: true)
  -d <descriptorTypeStr>    Descriptor types: 'ActionValues', 'NbInstr', 'FeetContact' (default: 'None', is tournament selection). Multiple can be used if seperated by comme like 'ActionValues,NbInstr'
  -r <reproduceResults>     Reproduce TELO results (default: true)
  --cvt <useCVT>            Use CVT Map-Elites (default: true)
  --scvt <sizeCVT>          CVT archive size (default: 1000)
  -a <archiveValues>        Archive values if not using CVT
  -h, --help                Display this help message
```

The configuration is already set to make it easy to reproduce the results from the article.

* The **use case** defines the MuJoCo environment;
* The **descriptor type** indicates the descriptor to use. If none is set, tournament selection is used.
* In `params_0.json`, `nbThreads` can be set to configure custom parallelization. By default, 16 threads are used.

The log results may differ slightly from the results reported in the article because they do not appear to be fully portable.

The results are deterministic when launched on the same operating system, but they appear to differ across operating systems. Gegelati is tested for full coverage, so we assume that the differences come from the MuJoCo library or from a bug in the source code.

## Testing the article results

The `renderMujoco` executable can be used to test and visualize the results from the article with the following options.

```shell
./bin/Release/renderMujoco -h help
Usage: ./bin/Release/renderMujoco [options]

Options:
  -d <dotFile>              Dot file of the individual tested
  -s <seed>                 Random seed (default: 0)
  -p <jsonFile>             Parameter file (default: params_0.json)
  -u <useCase>              MuJoCo use case (default: 'hopper')
  -x <xmlFile>              MuJoCo XML file (default: 'mujoco_models/<usecase>.xml')
  -v <speedRender>          Type of render: 0-default speed, 1-fast speed, 2-no visual (default: 0)
  -z <cameraFixed>          Camera is fixed on the agent by default (default: true)
  -f <pathVideo>            Save the render video if a folder path is given (default: '')
  -c <genCode>              Generate C code of the individual, used notably for interpretability (default: 'false')
  -d <printData>            Generate a csv file of the action/states values of the episode (default: 'false')
  -h                        Display this help message
```

Visualization requires a display server.

We provide a script for this:

```shell
./scripts/scriptServerMujoco.sh
export DISPLAY=:0
```

Once this is done, you can render some efficient behaviors of MAPLE on the tasks.

If the script does not work, you can still obtain the results without visualization by setting `-v 2`.

This should achieve a score of 5393.11 on the Humanoid (with 26 instructions):

```shell
./bin/Release/renderMujoco -u humanoid -d article_results/articleLogs/humanoid/MAP_ELITES_ACTION_VALUES/archiveDots_ActionValues/out_best_2730.5.p4.humanoid.dot
```

This should achieve a score of 3593.81 on the Ant (with 14 instructions):

```shell
/bin/Release/renderMujoco -u ant -d article_results/articleLogs/ant/MAP_ELITES_NB_INSTR/archiveDots_NbInstr/out_best_896.5.p4.ant.dot
```

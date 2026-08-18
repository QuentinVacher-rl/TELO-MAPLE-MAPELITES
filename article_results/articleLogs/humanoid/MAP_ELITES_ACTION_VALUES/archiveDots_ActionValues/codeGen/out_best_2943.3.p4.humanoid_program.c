/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-14 10:39:22
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_2943.3.p4.humanoid_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.928711, -0.615304, 0.083539, -0.60967, -0.260406, -0.20713, 0.385926, -0.921192, 0.876261, 0.72355};
	{
		double op0 = reg[7];
		double op1 = in1[351];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.207086, -1.00117, 0.388862, 0.975412, 1.89632, -0.083585, 0.187034, -0.780052, 0.364765, -1.1294};
	{
		double op0 = in1[62];
		reg[0] = cos(op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.23408, -0.538698, -0.28849, 0.802378, -1.49503, -0.266282, -0.663342, 0.489515, -0.017127, 0.18597};
	{
		double op0 = in1[144];
		double op1 = cst[5];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}


double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.814796, 0.821626, 0.388564, -0.685563, -0.760223, 1.28525, -0.289968, -0.5959, -0.596532, 0.473488};
	{
		double op0 = reg[7];
		double op1 = cst[5];
		reg[7] = cos(op0 * op1);
	}
	{
		double op0 = reg[7];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.845727, 0.48737, -1.1409, 0.883338, -0.817779, 0.231362, -0.01028, 0.601166, -0.377469, -0.435146};
	{
		double op0 = in1[18];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.393134, -0.029211, 0.593048, -0.884591, 0.207732, 0.816646, -0.619161, 0.033634, -0.336852, -0.346133};
	{
		double op0 = in1[109];
		double op1 = in1[335];
		double op2 = cst[4];
		reg[4] = op0 / op1 * op2;
	}
	{
		double op0 = reg[5];
		double op1 = cst[2];
		reg[6] = cos(op0 * op1);
	}
	{
		double op0 = reg[6];
		double op1 = reg[4];
		double op2 = cst[4];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.22546, -0.138414, -0.5278, 0.684097, -0.604501, 0.220015, -0.231474, 0.336225, 0.807545, 0.684608};
	{
		double op0 = in1[126];
		double op1 = reg[5];
		double op2 = cst[3];
		double op3 = cst[4];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.625503, -0.941383, 0.844383, 0.457285, -0.244702, -0.959378, 1.40818, -0.669973, 0.828724, 0.337934};
	{
		double op0 = in1[85];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.06005, 0.980234, -0.251901, -1.44956, -0.099815, -3.63783, 0.664797, 0.650492, 3.27788, -0.776908};
	{
		double op0 = in1[176];
		reg[7] = tan(op0);
	}
	{
		double op0 = reg[7];
		double op1 = in1[320];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}



double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.457673, 0.423558, 0.148888, -0.848818, 0.594326, -0.051529, -0.329004, 0.993058, -0.237966, 0.319313};
	{
		double op0 = in1[95];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.604196, 0.573681, -0.191984, -0.488776, 0.594326, -0.051529, -0.383596, 0.993058, -0.237966, 0.455897};
	{
		double op0 = in1[95];
		reg[0] = sin(op0);
	}
	{
		double op0 = reg[0];
		double op1 = reg[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.757117, -0.227336, -0.195488, 0.030734, -0.158642, -0.280237, -0.841078, 0.124272, 0.49604, 0.110849};
	{
		double op0 = in1[105];
		double op1 = cst[8];
		reg[0] = log(op0 * op1);
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.479439, -0.040609, -0.576193, 0.583124, 0.964852, 0.483858, -0.110622, 0.423749, 0.667608, 0.899845};
	{
		double op0 = reg[3];
		double op1 = cst[9];
		reg[5] = sin(op0 * op1);
	}
	{
		double op0 = reg[5];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.34275, 0.172122, 0.872892, 0.692709, 0.469639, -0.456423, 0.035962, 0.625109, 0.396635, -0.431797};
	{
		double op0 = in1[262];
		double op1 = in1[188];
		double op2 = cst[9];
		double op3 = cst[0];
		reg[3] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = in1[61];
		double op1 = reg[3];
		double op2 = cst[5];
		double op3 = cst[6];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}



double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.490693, -0.673972, -0.292461, 0.277269, -0.341278, 0.393515, 0.207509, -0.863302, 1.12117, -0.693074};
	{
		double op0 = reg[5];
		double op1 = reg[7];
		reg[1] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = reg[1];
		reg[1] = exp(op0);
	}
	{
		double op0 = in1[76];
		double op1 = reg[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.622346, 0.162728, -0.994915, 0.486883, 0.744679, -0.018967, 0.665558, -1.57725, -1.2328, -0.098029};
	{
		double op0 = reg[7];
		double op1 = in1[244];
		double op2 = cst[9];
		double op3 = cst[4];
		reg[7] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[7];
		double op1 = in1[296];
		double op2 = cst[8];
		double op3 = cst[4];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.06227, 0.36281, -0.041424, 0.296525, 0.820785, 0.615525, 0.361659, 0.145043, -0.748762, -0.631434};
	{
		double op0 = in1[275];
		double op1 = in1[91];
		double op2 = cst[7];
		double op3 = cst[8];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

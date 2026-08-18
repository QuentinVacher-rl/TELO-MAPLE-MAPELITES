/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:06
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_1783.0.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.0346, -0.600086, 0.101365, 0.084959, -0.339368, -0.389388, 0.605021, 0.973869, -0.481938, 0.383565};
	{
		double op0 = in1[17];
		double op1 = in1[8];
		double op2 = cst[0];
		double op3 = cst[0];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.070636, -0.70598, 0.719674, -0.354245, -0.821646, 0.940069, -0.257821, -0.799617, 0.238507, 0.675315};
	{
		double op0 = reg[0];
		double op1 = in1[9];
		double op2 = cst[3];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}



double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.61767, 0.363158, -0.576276, 0.032683, -0.899305, 0.056196, -0.516955, 0.668194, 0.928387, 0.362525};
	{
		double op0 = in1[14];
		double op1 = in1[23];
		double op2 = cst[3];
		double op3 = cst[5];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.020857, 0.165302, -1.08049, 0.796496, 0.278999, -0.023515, 0.378122, -0.722066, 0.550379, 0.476908};
	{
		double op0 = in1[4];
		reg[6] = tan(op0);
	}
	{
		double op0 = reg[6];
		reg[5] = exp(op0);
	}
	{
		double op0 = reg[5];
		double op1 = cst[8];
		reg[0] = log(op0 * op1);
	}
	{
		double op0 = reg[0];
		double op1 = in1[19];
		double op2 = cst[6];
		double op3 = cst[5];
		reg[3] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[3];
		double op1 = in1[23];
		double op2 = cst[9];
		double op3 = cst[5];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

 

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.696486, -0.412382, -1.12957, 0.902289, 0.777471, 0.009816, 0.737261, -0.924503, 0.404118, -0.466288};
	{
		double op0 = in1[12];
		double op1 = in1[7];
		double op2 = cst[1];
		double op3 = cst[0];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.481683, 0.917263, -0.452572, 0.963428, -0.999754, 0.436865, -0.437418, -0.834437, -0.933468, 0.005918};
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.163715, 0.543971, -0.055263, -0.099758, -1.22911, 0.066497, -0.039056, -0.738547, -0.60582, -0.769041};
	{
		double op0 = in1[5];
		double op1 = in1[6];
		double op2 = cst[1];
		double op3 = cst[6];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}


a0 = (i17 - i8) - 0.0346
a1 = i9 * -0.70598
a2 = i14 * 0.032683 - i23 * 0.056196
a3 = log(exp(tan(i4)) * 0.550379) * 0.180329 + i19 * 0.011214 - i23 * 0.023515
a4 = -(i12 * 0.412382 + i7 * 0.696486)
a5 = 0
a6 = i5 * 0.543971 - i6 * 0.039056
a7 = i5 * i6 * 0.093115

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.770822, -0.510268, -0.53516, 0.206526, 0.085466, -0.08438, -0.172799, -0.885797, 0.093115, 0.556875};
	{
		double op0 = in1[5];
		double op1 = in1[6];
		double op2 = cst[8];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

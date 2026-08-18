/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:55
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_397.5.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.070471, 0.869919, -0.045603, -0.223324, 0.209587, 0.600825, 0.77364, -0.189284, -0.135756, 0.155311};
	{
		double op0 = in1[21];
		double op1 = in1[4];
		double op2 = cst[4];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}


double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.419274, 0.996862, 1.052, 0.149436, 0.470806, -0.307773, -0.038002, 0.764511, 1.07977, 0.867054};
	{
		double op0 = in1[21];
		double op1 = in1[26];
		double op2 = cst[2];
		double op3 = cst[2];
		reg[6] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = in1[12];
		double op1 = reg[3];
		reg[3] = op0 - op1;
	}
	{
		double op0 = reg[3];
		double op1 = reg[6];
		double op2 = cst[6];
		double op3 = cst[6];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}


double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.925861, 0.892559, -0.850142, 0.6682, 0.182398, 0.703547, 1.07269, 0.783349, -0.511366, -1.11342};
	{
		double op0 = reg[0];
		double op1 = in1[5];
		double op2 = cst[5];
		double op3 = cst[4];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.733916, -0.869679, 0.334592, -0.81864, -0.623365, 0.755657, -0.31724, -0.458287, 0.50043, 0.386035};
	{
		double op0 = in1[7];
		reg[0] = sin(op0);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.35742, -0.145228, 0.281027, -0.833729, 0.232718, -0.000965, 1.51806, -0.416154, 0.45363, 0.75403};
	{
		double op0 = in1[10];
		double op1 = in1[7];
		double op2 = cst[1];
		double op3 = cst[3];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.04813, 0.759102, 0.428684, 0.291003, 0.491449, -0.900498, 0.036777, 0.646937, 0.990728, 0.354151};
	{
		double op0 = in1[7];
		double op1 = cst[6];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

a0 = i21 * i4 * 0.209587
a1 =  (i12 - (i21 - i26) * 1.052) * -0.038002
a2 = -i5 * 0.182398
a3 = sin(i7)
a4 = -(i10 * 0.145228 + i7 * 0.833729)
a5 = tan(i7 * 0.036777)
a6 =  (i4 - i21 * 0.16127) * 0.316174
a7 = tan(i12 * 0.141156)

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.284416, 0.31666, -0.526599, 0.256318, 0.074605, 0.316174, 0.085775, -0.16127, -0.415096, -0.69434};
	{
		double op0 = reg[4];
		double op1 = in1[21];
		double op2 = cst[9];
		double op3 = cst[5];
		reg[3] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = in1[4];
		double op1 = reg[3];
		double op2 = cst[5];
		double op3 = cst[7];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.141156, 0.069613, 0.701265, -0.518669, 0.495815, 0.251974, 0.103739, 0.038702, -0.430723, -1.56637};
	{
		double op0 = in1[12];
		double op1 = cst[0];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

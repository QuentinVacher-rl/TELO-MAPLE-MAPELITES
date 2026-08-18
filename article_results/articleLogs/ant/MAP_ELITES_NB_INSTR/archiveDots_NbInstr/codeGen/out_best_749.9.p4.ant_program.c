/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:04:34
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_749.9.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.276941, 0.740542, 0.95421, 0.857785, -0.445149, -0.638494, -0.051322, -0.011624, -0.148959, -0.350132};
	{
		double op0 = in1[21];
		double op1 = in1[6];
		double op2 = cst[6];
		double op3 = cst[9];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}


double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.051638, 0.076293, -0.702725, 0.095976, 0.217864, -0.172573, -0.475399, -1.19291, 1.33987, -0.156709};
	{
		double op0 = in1[18];
		double op1 = in1[8];
		double op2 = cst[9];
		double op3 = cst[4];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.922941, 0.573824, 1.31461, -0.583597, 0.664554, -0.79497, 0.641178, -1.29311, 0.917906, 0.274834};
	{
		double op0 = in1[7];
		double op1 = in1[4];
		double op2 = cst[2];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.040688, 0.205992, -0.42923, -0.88434, 0.035205, 0.501245, 1.53537, 0.89058, -0.404741, 0.534845};
	{
		double op0 = in1[10];
		double op1 = cst[4];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.265733, 0.302294, -0.169339, 0.961591, 0.265133, -0.767107, 0.972341, -0.226492, -0.330222, -0.531281};
	{
		double op0 = in1[7];
		double op1 = in1[0];
		double op2 = cst[9];
		reg[0] = op0 / op1 * op2;
	}
	return reg[0];
}


double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.477805, -0.064712, 2.50924, 0.587246, 0.851764, -0.10269, 0.510907, -0.269565, 0.203954, 0.780186};
	{
		double op0 = reg[1];
		double op1 = cst[6];
		reg[4] = exp(op0 * op1);
	}
	{
		double op0 = reg[4];
		double op1 = in1[7];
		double op2 = cst[8];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

a0 = -(i21 * 0.051322 + i6 * 0.350132)
a1 = i8 * 0.217864 - i18 * 0.156709
a2 = i7 * i4 * 1.31461
a3 = sin(i10 * 0.035205)
a4 = i7 / i0 * -0.531281
a5 = i7 * 0.203954
a6 = i7 * 0.304236 + i4 * 0.260247
a7 = 0

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.088629, 0.515112, 0.509496, 0.304236, -1.6702, 1.18489, 0.259791, 1.07346, 0.522575, 0.260247};
	{
		double op0 = in1[7];
		double op1 = in1[4];
		double op2 = cst[3];
		double op3 = cst[9];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.949594, 0.124773, -0.391245, -0.28157, 0.342558, -0.510844, 0.4591, 0.026306, -0.31973, 0.333584};
	return reg[0];
}

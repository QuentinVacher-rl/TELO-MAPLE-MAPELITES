/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:20
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_873.1.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.29312, -0.08691, -0.590999, -0.018078, 0.623026, 0.260464, 0.43723, -1.7062, -1.43193, 0.57191};
	{
		double op0 = reg[2];
		reg[4] = cos(op0);
	}
	{
		double op0 = in1[11];
		double op1 = reg[4];
		double op2 = cst[1];
		double op3 = cst[3];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}


double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.277371, 0.385293, -0.638316, -0.093179, 0.120004, 0.885454, -0.349268, -0.206222, -0.437848, -0.392474};
	{
		double op0 = in1[2];
		double op1 = reg[3];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.50514, -0.086323, 0.427834, 0.683677, 0.01528, 0.942844, 1.25369, 0.007853, 0.117832, 0.047594};
	{
		double op0 = in1[9];
		double op1 = in1[4];
		reg[0] = op0 / op1;
	}
	{
		double op0 = reg[0];
		reg[2] = exp(op0);
	}
	{
		double op0 = reg[2];
		double op1 = in1[11];
		double op2 = cst[4];
		double op3 = cst[7];
		reg[1] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[1];
		double op1 = in1[5];
		double op2 = cst[6];
		double op3 = cst[9];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}



double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.643165, -0.447054, -0.049562, -0.460353, -0.176907, 0.304096, 1.19463, 0.979683, -0.078931, -0.556934};
	{
		double op0 = in1[3];
		reg[7] = tan(op0);
	}
	{
		double op0 = reg[7];
		double op1 = in1[23];
		double op2 = cst[7];
		double op3 = cst[2];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.00281, 0.321496, 1.15887, -0.255162, -0.050178, 1.40339, -0.356585, 0.193506, -0.917675, -0.446233};
	{
		double op0 = in1[15];
		double op1 = in1[4];
		double op2 = cst[9];
		double op3 = cst[9];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.940577, -0.086323, 0.20347, -0.942696, 0.039769, 0.709671, 0.742758, 0.003944, 0.073168, 0.047594};
	return reg[0];
}


a0 = i11 * -0.08691 + 0.018078
a1 = max(i2, 0)
a2 = exp(i9 / i4) * 0.019156 - i11 * 0.009845 - i5 * 0.047594
a3 = tan(i3) * 0.979683 - i23 * 0.049562
a4 = (i4 - i15) * 0.446233
a5 = 0
a6 = i2 * 2.37061 - i9 * 1.09739
a7 = 0

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.24778, -0.216373, 2.37061, 0.309906, -0.11577, -1.37767, 0.324306, -1.04, -0.329522, -1.09739};
	{
		double op0 = in1[2];
		double op1 = in1[9];
		double op2 = cst[2];
		double op3 = cst[9];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.629925, -0.8878, 0.082704, 0.247526, -0.752034, -0.944446, 0.395637, 0.005187, 0.660852, 0.933454};
	return reg[0];
}

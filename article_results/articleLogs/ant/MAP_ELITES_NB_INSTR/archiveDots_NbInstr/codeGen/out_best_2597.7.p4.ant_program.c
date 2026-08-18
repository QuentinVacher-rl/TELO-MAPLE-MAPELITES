/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:04:16
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_2597.7.p4.ant_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.469582, -0.049662, 0.200231, 0.950552, 0.30044, 0.17052, -0.918142, -0.812449, 0.383099, 0.841047};
	{
		double op0 = in1[1];
		double op1 = in1[7];
		double op2 = cst[5];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}



double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.620156, -0.086164, 0.366675, 0.950552, 0.30044, 0.258043, -0.70071, -1.17379, 0.383099, 0.841047};
	{
		double op0 = in1[1];
		double op1 = in1[7];
		double op2 = cst[5];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = reg[0];
		double op1 = cst[3];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.31892, 0.415968, 0.374534, -1.44614, 0.148058, 0.256011, -0.500186, 1.23455, 0.322798, 0.315598};
	{
		double op0 = in1[7];
		double op1 = cst[3];
		reg[3] = exp(op0 * op1);
	}
	{
		double op0 = in1[4];
		double op1 = reg[3];
		double op2 = cst[8];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}



double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.84389, 0.228846, -0.521575, -0.084535, 0.048619, -0.90774, 0.266072, 0.187167, 0.584281, 0.253727};
	{
		double op0 = reg[0];
		double op1 = in1[6];
		double op2 = cst[2];
		double op3 = cst[7];
		reg[5] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = reg[5];
		double op1 = reg[4];
		reg[3] = op0 + op1;
	}
	{
		double op0 = reg[6];
		double op1 = reg[3];
		double op2 = cst[5];
		double op3 = cst[8];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.702112, -1.35967, 0.506712, 0.305489, -0.004848, -0.108072, -0.246879, 0.309949, -1.18328, 0.648638};
	{
		double op0 = in1[1];
		double op1 = in1[7];
		double op2 = cst[1];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.379793, -0.016623, 0.438777, 0.057804, 0.334394, 0.953514, 0.846272, 0.61509, 0.256113, 0.858472};
	{
		double op0 = in1[26];
		double op1 = cst[3];
		reg[2] = tan(op0 * op1);
	}
	{
		double op0 = reg[2];
		double op1 = cst[4];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}


a0 = i1 * 0.17052 - i7 * 0.469582
a1 = sin(i1 * 0.245283 - i7 * 0.589491)
a2 = i4 * 0.322798 + exp(i7 * -1.44614) * -0.31892
a3 = -i6 * 0.109358 
a4 = i1 * i7 * -1.35967
a5 = tan(tan(i26 * 0.057804) * 0.334394)
a6 = i7 * 0.098866 - i9 * 0.190963
a7 = tan(i7 * 0.545748)

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.190963, 0.357311, -0.328418, -0.304319, -0.057501, 0.005867, 0.098866, 0.6386, -0.192457, 1.14861};
	{
		double op0 = in1[7];
		double op1 = in1[9];
		double op2 = cst[6];
		double op3 = cst[0];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.976062, 0.138712, 0.028818, 0.132391, 0.545748, 0.48599, 1.00742, 0.185038, 0.418984, 0.733467};
	{
		double op0 = in1[7];
		double op1 = cst[4];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

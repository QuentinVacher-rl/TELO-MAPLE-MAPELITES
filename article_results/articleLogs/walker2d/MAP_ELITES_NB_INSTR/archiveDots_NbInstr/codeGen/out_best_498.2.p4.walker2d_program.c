/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 19:54:40
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_498.2.p4.walker2d_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.008708, 0.667433, -0.199797, 0.495865, -0.507476, 0.542101, -0.546749, 0.227461, -0.445823, 0.551876};
	{
		double op0 = in1[1];
		double op1 = cst[6];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.231824, 0.302639, 0.320042, 0.70882, 0.843384, -0.506098, 0.970815, 0.124706, -0.842148, -1.04146};
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.166734, 0.219654, -0.32831, -0.843199, -0.04901, -0.589393, -0.57628, 0.483787, 0.165833, 1.7856};
	{
		double op0 = in1[8];
		reg[2] = cos(op0);
	}
	{
		double op0 = reg[4];
		double op1 = reg[2];
		reg[0] = op0 - op1;
	}
	{
		double op0 = reg[0];
		double op1 = in1[8];
		double op2 = cst[5];
		double op3 = cst[3];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.217982, 0.302639, 0.320042, 0.552617, 0.813655, 0.375795, 0.920357, 0.124706, -0.590986, -0.623269};
	{
		double op0 = in1[5];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.737797, 0.309858, -0.774213, 0.017237, 1.0305, 0.050249, -0.11879, -0.348919, -0.657874, -1.79417};
	{
		double op0 = reg[0];
		reg[1] = tan(op0);
	}
	{
		double op0 = reg[1];
		reg[0] = cos(op0);
	}
	{
		double op0 = reg[0];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.791394, -0.525667, 1.29634, -0.887826, -0.185045, 0.249592, -0.760578, -0.112815, -0.474316, 0.473803};
	{
		double op0 = in1[9];
		reg[3] = sin(op0);
	}
	{
		double op0 = in1[3];
		double op1 = reg[3];
		double op2 = cst[7];
		double op3 = cst[1];
		reg[2] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[2];
		double op1 = in1[10];
		double op2 = cst[6];
		double op3 = cst[1];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

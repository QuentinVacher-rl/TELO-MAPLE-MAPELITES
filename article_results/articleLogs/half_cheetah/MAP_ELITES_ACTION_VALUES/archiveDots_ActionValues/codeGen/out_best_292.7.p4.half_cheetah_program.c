/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 16:43:43
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_292.7.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.810844, 0.594242, -1.04475, -0.585052, 1.72839, -0.330562, -0.365054, 0.685475, -0.467391, -0.346343};
	{
		double op0 = in1[3];
		double op1 = cst[4];
		reg[0] = tan(op0 * op1);
	}
	{
		double op0 = reg[0];
		double op1 = reg[0];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.22379, 0.133017, -0.228758, 0.188866, 0.156327, -0.445541, -1.35324, 0.850916, -0.673956, 1.88278};
	{
		double op0 = in1[8];
		double op1 = in1[11];
		double op2 = cst[3];
		double op3 = cst[2];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.577341, -0.418816, 1.1401, 0.201871, 0.216678, 0.748061, 0.506909, -0.867314, -0.873967, 0.131833};
	{
		double op0 = in1[11];
		reg[4] = exp(op0);
	}
	{
		double op0 = reg[2];
		double op1 = reg[4];
		double op2 = cst[4];
		double op3 = cst[9];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.396618, 0.593941, 0.744854, 0.042913, 0.575271, 0.902135, -0.586006, 0.393084, 0.678124, -0.86338};
	{
		double op0 = in1[10];
		double op1 = cst[8];
		reg[2] = log(op0 * op1);
	}
	{
		double op0 = in1[11];
		double op1 = reg[2];
		double op2 = cst[9];
		double op3 = cst[3];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.717401, 0.690325, 0.778421, 0.050227, -2.82347, 0.833861, -0.018212, 0.970838, -0.995576, -0.101815};
	{
		double op0 = in1[13];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.17334, 0.421113, -0.03791, 0.284385, 0.117145, -0.609279, 1.00276, 1.21735, -0.225635, 0.040462};
	{
		double op0 = in1[7];
		double op1 = cst[0];
		reg[5] = tan(op0 * op1);
	}
	{
		double op0 = reg[5];
		reg[0] = tan(op0);
	}
	return reg[0];
}

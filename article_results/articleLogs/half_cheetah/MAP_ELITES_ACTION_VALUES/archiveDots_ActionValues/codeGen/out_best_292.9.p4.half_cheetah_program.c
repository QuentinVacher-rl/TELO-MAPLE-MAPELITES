/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 16:46:47
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_292.9.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.000846, -0.141618, 0.024083, -0.208822, 0.253122, -0.677179, 0.092589, -0.953176, -1.80547, 0.554519};
	{
		double op0 = reg[4];
		double op1 = in1[9];
		reg[5] = op0 * op1;
	}
	{
		double op0 = in1[1];
		double op1 = reg[5];
		double op2 = cst[8];
		double op3 = cst[1];
		reg[7] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[7];
		double op1 = in1[3];
		reg[0] = op0 + op1;
	}
	{
		double op0 = reg[0];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.466279, 0.510414, 0.948039, 0.253118, -1.05765, -0.890597, -0.865164, 0.199959, -1.16993, 0.121853};
	{
		double op0 = in1[14];
		double op1 = in1[7];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = in1[3];
		double op1 = reg[0];
		double op2 = cst[8];
		double op3 = cst[8];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.880988, -0.723608, 0.675836, -0.684063, -0.742957, -0.112584, -0.578933, 0.630901, -0.011967, -0.020445};
	{
		double op0 = reg[2];
		double op1 = in1[14];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.445857, -0.213, -0.320684, -0.466507, 0.335359, -0.630958, 0.640027, -0.296447, 0.648412, -0.014736};
	{
		double op0 = in1[14];
		double op1 = cst[2];
		reg[5] = log(op0 * op1);
	}
	{
		double op0 = in1[8];
		double op1 = reg[5];
		reg[4] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = reg[4];
		double op1 = in1[15];
		double op2 = cst[0];
		double op3 = cst[1];
		reg[5] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = in1[10];
		double op1 = reg[5];
		double op2 = cst[0];
		double op3 = cst[1];
		reg[2] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = reg[2];
		double op1 = cst[0];
		reg[2] = tan(op0 * op1);
	}
	{
		double op0 = reg[2];
		double op1 = in1[3];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.08479, 0.068983, 1.42922, 0.157667, -0.854365, -0.209289, 0.000153, -0.039216, -0.18855, 1.6167};
	{
		double op0 = in1[6];
		double op1 = cst[2];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.269021, 0.934164, -0.375036, -0.448586, 0.612349, 0.926868, 0.313172, 0.323904, 0.488701, 0.699166};
	{
		double op0 = in1[2];
		double op1 = cst[0];
		reg[0] = cos(op0 * op1);
	}
	{
		double op0 = reg[0];
		double op1 = in1[11];
		reg[0] = op0 * op1;
	}
	return reg[0];
}

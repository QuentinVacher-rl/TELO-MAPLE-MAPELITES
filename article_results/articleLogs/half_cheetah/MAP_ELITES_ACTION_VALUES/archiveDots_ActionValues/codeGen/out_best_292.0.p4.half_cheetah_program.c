/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 16:46:50
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_292.0.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.41857, -0.463248, -0.592874, 0.29279, -0.184684, -0.490581, -0.38834, -0.183889, 0.973335, 0.910071};
	{
		double op0 = in1[3];
		double op1 = cst[3];
		reg[5] = exp(op0 * op1);
	}
	{
		double op0 = in1[1];
		double op1 = reg[5];
		double op2 = cst[0];
		double op3 = cst[5];
		reg[0] = op0 * op2 - op1 * op3;
	}
	{
		double op0 = in1[3];
		double op1 = reg[0];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.846643, 0.127945, -0.734009, 0.946202, -1.27636, -0.560615, 0.391407, -0.376726, 0.267394, 0.112796};
	{
		double op0 = in1[4];
		double op1 = reg[4];
		double op2 = cst[6];
		double op3 = cst[0];
		reg[4] = op0 * op2 + op1 * op3;
	}
	{
		double op0 = reg[4];
		reg[5] = tan(op0);
	}
	{
		double op0 = reg[5];
		double op1 = in1[14];
		double op2 = cst[0];
		double op3 = cst[9];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.321518, 0.966416, 0.20734, -0.012013, 0.161183, -0.152706, -0.767235, 0.779937, 0.79278, -0.156694};
	{
		double op0 = in1[11];
		double op1 = in1[8];
		double op2 = cst[0];
		reg[1] = op0 / op1 * op2;
	}
	{
		double op0 = in1[16];
		double op1 = reg[1];
		reg[0] = op0 % op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.432957, -0.998639, -0.811866, -0.818489, -0.7582, 0.025065, 1.39584, 0.848075, -0.056996, -0.291886};
	{
		double op0 = in1[1];
		double op1 = cst[6];
		reg[1] = log(op0 * op1);
	}
	{
		double op0 = in1[16];
		double op1 = cst[4];
		reg[0] = log(op0 * op1);
	}
	{
		double op0 = reg[1];
		double op1 = cst[3];
		reg[7] = cos(op0 * op1);
	}
	{
		double op0 = reg[0];
		double op1 = in1[7];
		double op2 = cst[5];
		reg[1] = op0 * op1 * op2;
	}
	{
		double op0 = reg[7];
		double op1 = cst[2];
		reg[0] = tan(op0 * op1);
	}
	{
		double op0 = reg[1];
		reg[5] = tan(op0);
	}
	{
		double op0 = reg[5];
		reg[3] = exp(op0);
	}
	{
		double op0 = reg[3];
		double op1 = reg[0];
		double op2 = cst[0];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.753268, 0.685752, -0.706425, -0.725789, 0.685845, 0.593832, -1.32547, 0.447309, 0.696429, -1.90584};
	{
		double op0 = in1[3];
		double op1 = cst[9];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.753268, 0.357575, -1.21111, -1.30793, 1.23541, 0.593832, -0.796812, 0.433403, 0.911685, -0.977425};
	{
		double op0 = in1[3];
		double op1 = cst[1];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

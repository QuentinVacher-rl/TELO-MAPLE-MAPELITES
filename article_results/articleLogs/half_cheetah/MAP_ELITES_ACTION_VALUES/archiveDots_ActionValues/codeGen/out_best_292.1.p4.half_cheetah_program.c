/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 16:46:55
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_292.1.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.257174, 0.887042, -0.62562, 0.203222, 0.724101, 1.37389, -0.971419, 0.110508, 0.744093, 0.031203};
	{
		double op0 = reg[1];
		double op1 = in1[4];
		reg[4] = op0 + op1;
	}
	{
		double op0 = reg[4];
		double op1 = in1[13];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.776907, 0.442067, 0.769114, 0.606908, 0.905803, -0.399123, 0.686388, 0.203722, 0.116925, 0.258872};
	{
		double op0 = in1[3];
		double op1 = in1[11];
		double op2 = cst[7];
		double op3 = cst[2];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.60755, 0.005785, -0.742994, -0.21007, 0.601833, -0.457672, -0.38983, 0.562601, 0.957727, 0.400577};
	{
		double op0 = in1[10];
		reg[3] = exp(op0);
	}
	{
		double op0 = in1[13];
		double op1 = reg[3];
		reg[4] = op0 * op1;
	}
	{
		double op0 = reg[0];
		reg[2] = tan(op0);
	}
	{
		double op0 = reg[4];
		double op1 = reg[2];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.955029, 1.34922, -0.239998, -0.46159, -1.08891, 0.382801, -1.0776, 0.74332, 0.331776, -0.288021};
	{
		double op0 = in1[0];
		double op1 = in1[13];
		double op2 = cst[7];
		reg[0] = op0 * op1 * op2;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.112453, -1.09304, 0.044152, 0.310708, -0.299196, -0.882785, 0.74481, -0.646145, 1.17307, 0.03386};
	{
		double op0 = in1[13];
		double op1 = cst[5];
		reg[0] = log(op0 * op1);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.070514, 0.571366, 0.610979, 0.675023, 0.162254, 0.580309, -0.578116, -0.31973, -0.168794, 0.398918};
	{
		double op0 = in1[14];
		double op1 = cst[9];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

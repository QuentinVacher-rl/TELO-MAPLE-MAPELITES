/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-12 16:46:39
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_292.8.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.364457, 0.114096, -0.512797, 0.362229, 0.421098, 0.937308, 0.539545, -0.450925, -0.292804, 0.242303};
	{
		double op0 = in1[3];
		double op1 = reg[5];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-1.98975, -0.441113, 0.149346, -0.272135, 0.811774, 0.237464, 0.603645, -0.416723, 0.633801, -0.855998};
	{
		double op0 = in1[14];
		reg[0] = exp(op0);
	}
	{
		double op0 = in1[6];
		double op1 = cst[5];
		reg[4] = cos(op0 * op1);
	}
	{
		double op0 = reg[4];
		double op1 = reg[0];
		double op2 = cst[1];
		double op3 = cst[6];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.026919, -0.488814, -0.013644, -0.320586, -0.502072, 0.017304, 0.252886, 0.929327, -0.055179, 0.472357};
	{
		double op0 = in1[3];
		double op1 = cst[8];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.18148, -1.17517, 1.76177, -0.468864, 0.260003, -0.023805, 0.680706, 0.828653, -0.419467, 0.713148};
	{
		double op0 = in1[14];
		reg[7] = log(op0);
	}
	{
		double op0 = reg[7];
		double op1 = cst[7];
		reg[0] = tan(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = cst[7];
		reg[1] = tan(op0 * op1);
	}
	{
		double op0 = reg[0];
		double op1 = reg[1];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {1.11476, 0.008428, -0.383654, -0.656828, 0.352665, -0.207861, -0.10756, -0.254141, -0.027811, 0.9572};
	{
		double op0 = in1[2];
		reg[7] = cos(op0);
	}
	{
		double op0 = in1[16];
		double op1 = reg[7];
		double op2 = cst[5];
		double op3 = cst[2];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.783959, -0.730847, 0.22315, -0.731591, -0.446997, 0.624309, 0.173227, -0.442667, 0.484524, 0.108025};
	{
		double op0 = in1[5];
		double op1 = reg[0];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

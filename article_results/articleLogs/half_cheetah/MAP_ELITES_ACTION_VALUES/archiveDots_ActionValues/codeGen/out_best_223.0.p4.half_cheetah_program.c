/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-17 01:42:00
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_223.0.p4.half_cheetah_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.971097, 0.477872, -0.421555, 0.763501, -0.771977, -0.076275, -0.802705, 0.645803, 0.293553, 0.587018};
	{
		double op0 = in1[3];
		reg[0] = exp(op0);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.846643, -0.07644, -0.734009, 0.946202, -0.852517, -0.560615, 0.587147, -0.376726, 0.278656, 0.102334};
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
	int32_t cst[10] = {0.381923, -0.162175, -0.629904, -1.87464, 0.77174, -0.64863, -0.646472, -0.589313, 0.659221, -1.5441};
	{
		double op0 = in1[14];
		double op1 = cst[1];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.512162, 1.2961, 0.564649, 0.903921, 0.518945, 0.226837, -0.130753, -0.834214, 0.84299, 0.788763};
	{
		double op0 = in1[11];
		double op1 = cst[9];
		reg[3] = log(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = reg[3];
		double op2 = cst[9];
		double op3 = cst[5];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.521943, 0.83256, 0.434852, 0.903921, 0.404496, 0.226837, -0.130753, -0.906156, 0.84299, 0.607184};
	{
		double op0 = in1[11];
		double op1 = cst[9];
		reg[3] = log(op0 * op1);
	}
	{
		double op0 = reg[3];
		double op1 = reg[7];
		double op2 = cst[3];
		double op3 = cst[5];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.139935, 0.63309, 0.002759, -0.17545, 0.178583, -0.789965, 0.317349, -0.038607, 0.143603, -0.21523};
	{
		double op0 = in1[3];
		reg[0] = log(op0);
	}
	return reg[0];
}

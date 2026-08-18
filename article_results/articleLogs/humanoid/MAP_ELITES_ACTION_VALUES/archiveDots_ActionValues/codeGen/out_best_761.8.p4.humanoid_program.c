/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-14 10:38:00
 * With the CodeGen::ProgramGenerationEngine.
 */

#include "out_best_761.8.p4.humanoid_program.h"
#include "externHeader.h"
#include <stdint.h>
extern double* in1;

double P0(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.167263, -0.100829, 0.07769, -0.233476, 0.067293, -0.761907, 1.9274, 0.172968, 0.519091, -0.023351};
	{
		double op0 = in1[124];
		double op1 = cst[6];
		reg[0] = tan(op0 * op1);
	}
	return reg[0];
}

double P1(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.505646, 0.429514, 1.38692, -0.148979, 0.19535, 0.542673, -0.766724, -1.2889, -0.433969, -0.086629};
	{
		double op0 = in1[154];
		double op1 = cst[9];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P2(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.884564, -0.503818, -0.299519, 0.510807, 0.141796, -0.612191, 0.833915, -0.248038, -0.664085, -0.824081};
	{
		double op0 = reg[1];
		double op1 = in1[222];
		reg[5] = op0 - op1;
	}
	{
		double op0 = reg[5];
		double op1 = in1[191];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P3(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.777663, -0.591332, -0.256034, -1.31545, -0.649131, 0.663771, 0.491949, -0.806902, 0.926794, -0.069894};
	{
		double op0 = in1[221];
		double op1 = in1[205];
		double op2 = cst[3];
		double op3 = cst[9];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P4(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-2.21088, 0.372546, -0.345374, 0.07863, 0.184383, -0.300407, -0.176969, -0.71382, -0.986305, -3.11356};
	{
		double op0 = in1[31];
		double op1 = in1[147];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P5(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.079617, -0.84024, 0.140021, 0.082723, -0.27341, -0.275794, 0.526611, 0.557211, 0.492166, 0.465483};
	{
		double op0 = reg[1];
		double op1 = cst[0];
		reg[5] = tan(op0 * op1);
	}
	{
		double op0 = in1[108];
		double op1 = reg[5];
		double op2 = cst[1];
		reg[5] = op0 / op1 * op2;
	}
	{
		double op0 = in1[77];
		double op1 = reg[5];
		double op2 = cst[9];
		double op3 = cst[5];
		reg[0] = op0 * op2 + op1 * op3;
	}
	return reg[0];
}

double P6(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.202371, 0.21057, -0.915957, -0.462128, -0.426157, -0.84036, 0.197478, 0.97489, -0.975242, 0.001319};
	{
		double op0 = in1[55];
		reg[0] = log(op0);
	}
	return reg[0];
}

double P7(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.520771, 0.831121, 0.703394, -0.165207, 0.02188, -0.46548, -0.969607, -0.918034, -0.178436, -0.18252};
	{
		double op0 = in1[229];
		double op1 = in1[93];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P8(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.52017, -0.075187, 0.634092, -0.346757, 1.22336, 0.443227, 0.785324, 0.019403, 0.151463, 0.378479};
	{
		double op0 = reg[5];
		double op1 = in1[115];
		reg[0] = op0 + op1;
	}
	return reg[0];
}

double P9(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.707142, 0.00633, -0.393335, -0.506644, 0.193598, 0.740192, -0.911552, -0.447472, -0.585506, 0.969977};
	{
		double op0 = in1[91];
		reg[5] = exp(op0);
	}
	{
		double op0 = reg[5];
		double op1 = in1[344];
		reg[0] = op0 / op1;
	}
	return reg[0];
}

double P10(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.34001, 0.256113, 0.198519, 0.591504, 0.272514, -0.135141, 0.173679, -0.203942, 0.247152, 0.631135};
	{
		double op0 = in1[197];
		double op1 = cst[0];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

double P11(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.677358, 0.956098, 0.153311, 0.372014, -0.008615, 0.521286, -0.230652, 0.364929, -0.373355, 0.588866};
	{
		double op0 = in1[79];
		double op1 = reg[1];
		double op2 = cst[1];
		double op3 = cst[5];
		reg[0] = op0 * op2 - op1 * op3;
	}
	return reg[0];
}

double P12(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.623649, 0.461451, 0.576681, 0.500675, 0.945887, 0.78, -0.512024, -0.931395, -0.553516, -0.065416};
	{
		double op0 = in1[68];
		double op1 = in1[118];
		reg[1] = ((op0) < (op1)) ? (op1) : (op0);
	}
	{
		double op0 = reg[1];
		reg[0] = tan(op0);
	}
	return reg[0];
}

double P13(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.643563, 0.326385, -0.955668, 0.013577, -0.895252, 0.260266, -0.284995, -0.663343, -0.026339, 0.328314};
	{
		double op0 = in1[102];
		double op1 = cst[3];
		reg[0] = sin(op0 * op1);
	}
	return reg[0];
}

double P14(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {-0.414295, -0.546351, -0.513016, 0.90092, -1.04795, -0.008151, -0.379873, 0.050115, 0.377951, -0.667002};
	{
		double op0 = in1[9];
		double op1 = in1[24];
		reg[0] = ((op0) < (op1)) ? (op1) : (op0);
	}
	return reg[0];
}

double P15(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.144117, -0.973329, -0.494733, 0.146433, -1.16557, 1.06232, -0.580872, 0.853439, 0.076358, -0.303822};
	{
		double op0 = reg[2];
		double op1 = in1[115];
		reg[0] = op0 - op1;
	}
	return reg[0];
}

double P16(){
	double reg[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	int32_t cst[10] = {0.123645, -0.864625, -0.018869, -0.178907, -0.478707, -0.199946, -0.279262, -1.95514, 0.594998, -0.210251};
	{
		double op0 = in1[298];
		double op1 = cst[9];
		reg[0] = exp(op0 * op1);
	}
	return reg[0];
}

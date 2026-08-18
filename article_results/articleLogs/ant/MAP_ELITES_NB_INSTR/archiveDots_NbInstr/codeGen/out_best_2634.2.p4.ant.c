/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-01-13 15:03:33
 * With the CodeGen::TPGGenerationEngine.
 */

#include "out_best_2634.2.p4.ant.h"
#include "out_best_2634.2.p4.ant_program.h"
#include <limits.h>
#include <assert.h>
#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int bestProgram(double *results, int nb) {
	int bestProgram = 0;
	double bestScore = (isnan(results[0]))? -INFINITY : results[0];
	for (int i = 1; i < nb; i++) {
		double challengerScore = (isnan(results[i]))? -INFINITY : results[i];
		if (challengerScore >= bestScore) {
			bestProgram = i;
			bestScore = challengerScore;
		}
	}
	return bestProgram;
}

void activationFunction(double *actions) {
	for (size_t i = 0; i < 8; i++) {
		if(isnan(actions[i])) actions[i] = -INFINITY;

		actions[i] = tanh(actions[i]);
	}
}

enum vertices {A4999456, };

void inferenceTPG(double* actions) {

	enum vertices currentVertex = A4999456;
	while(1) {
		switch (currentVertex) {
		case A4999456: {
				actions[0] = P0();
				actions[1] = P1();
				actions[2] = P2();
				actions[3] = P3();
				actions[4] = P4();
				actions[5] = P5();
				actions[6] = P6();
				actions[7] = P7();
				return activationFunction(actions);
			}
		}
	}
}

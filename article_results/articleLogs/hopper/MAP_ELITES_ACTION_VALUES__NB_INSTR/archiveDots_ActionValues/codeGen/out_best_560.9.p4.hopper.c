/**
 * File generated with GEGELATI v2.0.0
 * On the 2026-03-21 04:37:35
 * With the CodeGen::TPGGenerationEngine.
 */

#include "out_best_560.9.p4.hopper.h"
#include "out_best_560.9.p4.hopper_program.h"
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
	for (size_t i = 0; i < 3; i++) {
		if(isnan(actions[i])) actions[i] = -INFINITY;

		actions[i] = tanh(actions[i]);
	}
}

enum vertices {A1987011, };

void inferenceTPG(double* actions) {

	enum vertices currentVertex = A1987011;
	while(1) {
		switch (currentVertex) {
		case A1987011: {
				actions[0] = P0();
				actions[1] = P1();
				actions[2] = P2();
				return activationFunction(actions);
			}
		}
	}
}

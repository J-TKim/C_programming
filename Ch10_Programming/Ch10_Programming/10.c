#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 3

void vector_add(double x[], double y[]) {
	double ret[SIZE];

	for (int i = 0; i < SIZE; i++)
		ret[i] = x[i] + y[i];

	printf("º¤ÅÍÀÇ ÇÕ = [");
	for (int i = 0; i < SIZE; i++)
		printf(" %lf", ret[i]);
	printf("]\n");
}

void vector_dot_prod(double x[], double y[]) {
	double sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += x[i] * y[i];

	printf("º¤ÅÍÀÇ ³»Àû=%lf", sum);
}

int main(void) {
	double x[SIZE] = { 1, 2, 3 };
	double y[SIZE] = { 1, 2, 3 };

	vector_add(x, y);
	vector_dot_prod(x, y);

	return 0;
}
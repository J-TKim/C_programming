#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 3

void scalar_mult(int a[][SIZE], int scalar) {
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			a[i][j] *= 2;

	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

void transpose(int a[][SIZE], int b[][SIZE]) {
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			b[i][j] = a[j][i];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}

int main(void) {
	int x[][3] = { 1, 2, 3,
	4, 5, 6,
	7, 8, 9 };

	int b[3][3];

	//scalar_mult(x, 2);

	transpose(x, b);

	return 0;
}
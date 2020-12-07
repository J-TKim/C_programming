#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x[][3] = {10, 20, 30,
	40, 50, 60,
	70, 80, 90};
	printf("x 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}

	int y[][3] = { 9, 8, 7,
	6, 5, 4,
	3, 2, 1 };
	printf("y 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}

	printf("x + y 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", x[i][j] + y[i][j]);
		}
		printf("\n");
	}
}
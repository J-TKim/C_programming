#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 10

int main(void) {
	double x[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 원소를 입력하시오: ", i);
		scanf("%lf", &x[i]);
	}

	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += x[i];
	}
	int avg = sum / SIZE;

	int std = 0;
	for (int i = 0; i < SIZE; i++) {
		std += (x[i] - avg) * (x[i] - avg);
	}
	std = std / SIZE;

	printf("평균 : %d\n", avg);
	printf("표준편차 : %d\n", std);
}
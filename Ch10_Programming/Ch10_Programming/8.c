#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 10

int main(void) {
	double x[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("%d��° ���Ҹ� �Է��Ͻÿ�: ", i);
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

	printf("��� : %d\n", avg);
	printf("ǥ������ : %d\n", std);
}
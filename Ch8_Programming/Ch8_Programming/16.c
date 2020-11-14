#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int factorial(int num) {
	int i, result = 1;

	for (i = 1; i <= num; i++)
		result *= i;

	return result;
}

int main(void) {
	int n;
	double e = 1;

	printf("어디까지 계산할까요: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		e += 1 / (double)factorial(i);
	}

	printf("오일러의 수는 %lf입니다.", e);
}
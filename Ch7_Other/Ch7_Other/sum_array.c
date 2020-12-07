#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 5

double sum_arr(double Arr[], int size) {
	double sum = 0;

	for (int i = 0; i < size; i++) {
		sum += Arr[i];
	}

	return sum;
}


int main(void) {
	double sum, Arr[SIZE];
	int n;

	printf("실수 5개를 입력하시오: ");
	scanf("%lf %lf %lf %lf %lf", &Arr[0], &Arr[1], &Arr[2], &Arr[3], &Arr[4]);

	sum = sum_arr(Arr, SIZE);

	printf("합계: %lf", sum);

	printf("\n");

	return 0;
}

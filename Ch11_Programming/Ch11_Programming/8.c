#include <stdio.h>
#pragma warning(disable:4996)

void array_print(int* A, int size) {
	int i;
	printf("A[] = ");
	for (i = 0; i < size; i++) {
		printf(" %d", A[i]);
	}
	printf(" \n");
}

int array_sum(int* A, int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += A[i];
	}
	return sum;
}

int main(void) {
	int A[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int size = sizeof(A) / sizeof(A[0]);

	array_print(&A, size);
	
	int sum = array_sum(&A, size);
	printf("������ ��=%d", sum);

	return 0;
}
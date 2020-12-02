#include <stdio.h>
#pragma warning(disable:4996)

void array_print(int* A, int size) {
	int i;
	printf("A[] = {");
	for (i = 0; i < size; i++) {
		printf(" %d", A[i]);
	}
	printf(" }\n");
}

void array_copy(int* A, int* B, int size) {
	int i;
	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

int main(void) {
	int A[10] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0 };
	int B[10];
	int size = sizeof(A) / sizeof(A[0]);

	array_copy(&A, &B, size);
	array_print(&A, size);
	array_print(&B, size);

	return 0;
}
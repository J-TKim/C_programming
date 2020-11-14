#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 10

int array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

int main(void) {
	int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int b[SIZE];

	array_copy(a, b, SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}

}
#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 20

int fill_arr(int Arr[], int size, int n) {

	for (int i = 0; i < size; i++) {
		Arr[i] = n;
	}
}


int main(void) {
	int Arr[SIZE];
	int n;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &n);
	
	fill_arr(Arr, SIZE, n);

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", Arr[i]);
	}

	printf("\n");

	return 0;
}

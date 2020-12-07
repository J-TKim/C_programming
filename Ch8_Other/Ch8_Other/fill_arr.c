#include <stdio.h>
#include <time.h>
#pragma warning(disable:4996)

int fill_arr(int* p, int n, int size) {

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		*p = n;
		*p++;

int main(void) {

	int arr[3][5];
	int n;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &n);

	int size = 15;

	fill_arr(arr, n, size);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++ ) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
		
}
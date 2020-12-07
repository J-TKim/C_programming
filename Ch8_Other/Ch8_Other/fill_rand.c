#include <stdio.h>
#include <time.h>
#define N 100

int fill_arr(int* p) {

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		*p = rand() % N;
		*p++;
	}

}

int main(void) {

	int arr[10];
	fill_arr(arr);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
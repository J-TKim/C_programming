# include <stdio.h>


void get_min_max(int* p, int size) {
	int min = *p;
	int max = *p;
		
	for (int i = 1; i < size; i++) {
		if (min > * (p + i)) min = *(p + i);
		if (max < * (p + i)) max = *(p + i);
	}

	printf("최대값: %d\n", max);
	printf("최솟값: %d\n", min);
}

int main(void) {

	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };

	printf("배열­: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	get_min_max(arr, 10);

}
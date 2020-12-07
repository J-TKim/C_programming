#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int Arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int min = Arr[0], max = Arr[0];

	printf("배열: ");

	printf("%d ", Arr[0]);

	for (int i = 1; i < 10; i++) {
		if (min > Arr[i]) min = Arr[i];
		if (max < Arr[i]) max = Arr[i];
		printf("%d ", Arr[i]);
	}

	printf("\n최대값: %d\n", max);
	printf("최솟값: %d\n", min);

	return 0;
}

#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double Arr1[10] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	double Arr2[10];

	printf("배열: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1lf ", Arr1[i]);
		Arr2[9 - i] = Arr1[i];
	}

	printf("\n");
	printf("역순: ");

	for (int i = 0; i < 10; i++) {
		printf("%.1lf ", Arr2[i]);
	}

	printf("\n");

	return 0;
}

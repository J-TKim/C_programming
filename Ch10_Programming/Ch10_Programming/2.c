#include <stdio.h>
#pragma warning(disable:4996)



int main(void) {
	int x[10] = { 0, };

	for (int i = 0; i < 10; i++) {
		x[i] = rand();
	}

	int max = x[0], min = x[0];

	for (int i = 0; i < 10; i++) {
		if (max < x[i]) max = x[i];

		if (min > x[i]) min = x[i];
	}

	printf("ÃÖ´ñ°ªÀº %d", max);
	printf("ÃÖ¼Ú°ªÀº %d", min);

	return 0;
}
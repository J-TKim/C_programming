#include <stdio.h>
#pragma	warning(disable:4996)

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;

	return 0;
}

int main(void) {
	int x = 100;
	int y = 200;

	int sum, diff;

	get_sum_diff(x, y, &sum, &diff);

	printf("���ҵ��� ��=%d\n", sum);
	printf("���ҵ��� ��=%d\n", diff);
}
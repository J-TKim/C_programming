#include <stdio.h>
#pragma warning(disable:4996)
#define row 3
#define col 5

void sum_row(int x[row][col], int roww, int coll) {
	int sum = 0;

	for (int i = 0; i < coll; i++) {
		sum += x[roww][i];
	}
	
	printf("%d행의 합계: %d\n", roww, sum);
}

void sum_col(int x[row][col], int roww, int coll) {
	int sum = 0;

	for (int i = 0; i < roww; i++) {
		sum += x[i][coll];
	}

	printf("%d열의 합계: %d\n", coll, sum);
}

int main(void) {
	
	int a[row][col] = { 12, 56, 32, 16, 98,
					99, 56, 34, 41, 3,
					65, 3, 87, 78, 21 };

	for (int i = 0; i < row; i++) {
		sum_row(a, i, col);
	}

	for (int i = 0; i < col; i++) {
		sum_col(a, row, i);
	}

	return 0;
}
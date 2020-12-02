#include <stdio.h>
#pragma warning(disable:4996)


void get_int(int* px, int* py) {
	printf("두개의 정수를 입력하시오(예: 10 20): ");
	scanf("%d %d", &*px, &*py);
}

int main(void) {
	int x, y;
	get_int(&x, &y);
	
	printf("정수의 합은 %d", x + y);

	return 0;
}
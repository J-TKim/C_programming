#include <stdio.h>
#pragma warning(disable:4996)

int even(int n) {
	int ret;

	if (n % 2 == 0)
		ret = 1;
	else
		ret = 0;

	return ret; 
}

int absolute(int n) {
	int ret = n;

	if (n <= 0)
		ret = -n;
	
	return ret;
}

int sign(int n) {
	int ret;

	if (n < 0)
		ret = -1;

	else if (n > 0)
		ret = 1;

	else if (n = 0)
		ret = 0;

	return ret;
}

int main(void) {
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("even()의 결과: ");

	if (even(n) == 1)
		printf("짝수\n");

	else
		printf("홀수\n");

	printf("absolute()의 결과: %d\n", absolute(n));
	
	printf("sign()의 결과: ");
	if (sign(n) == 1)
		printf("양수\n");

	else if (sign(n) == 0)
		printf("0\n");

	else if (sign(n) == -1)
		printf("-1\n");

	return 0;
}
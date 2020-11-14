#include <stdio.h>
#pragma warning(disable:4996)

int number_of_digits(int n)
{
	if (n == 0) {
		return 0;
	}
	while (n != 0)
	{
		return 1 + number_of_digits(n / 10);
	}
	return 0;
}

int main(void) {
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	int c;
	
	c = number_of_digits(n);

	printf("자리수의 개수: ");
	printf("%d", c);
	return 0;
}
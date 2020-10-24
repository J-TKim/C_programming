#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	double x, fx;

	printf("x의 값을 입력하시오:");
	scanf("%lf", &x)
		;
	if (x <= 0)
		fx = x * x * x - 9.0 * x + 2.0;
	else
		fx = 7.0 * x + 2.0;

	printf("f(x)의 값은 %f\n", fx);
	return 0;
}

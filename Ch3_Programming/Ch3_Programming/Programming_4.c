#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	double f, c;

	printf("화씨값을 입력하시오: ");
	scanf("%lf", &f);

	c = (5.0 / 9.0) * (f - 32.0);

	printf("섭씨값은 %lf도 입니다.", c);

	return 0;
}
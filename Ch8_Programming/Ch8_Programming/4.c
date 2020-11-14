#include <stdio.h>
#pragma warning(disable:4996)

void is_leap(int year) {
	if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
		printf("%d년은 366일 입니다.", year);
	else
		printf("%d년은 365일 입니다.", year);
}

int main(void) {
	int year;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	is_leap(year);

	return 0;
}
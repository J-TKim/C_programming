#include <stdio.h>
#pragma warning(disable:4996)

void is_leap(int year) {
	if (((year % 100 != 0) && (year % 4 == 0)) || (year % 400 == 0))
		printf("%d���� 366�� �Դϴ�.", year);
	else
		printf("%d���� 365�� �Դϴ�.", year);
}

int main(void) {
	int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);

	is_leap(year);

	return 0;
}
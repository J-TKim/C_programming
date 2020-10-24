#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int h, age;

	printf("키를 입력하시오(cm) : ");
	scanf("%d", &h);

	printf("나이를 입력하시오 : ");
	scanf("%d", &age);

	if (h >= 140 && age >= 10)
		printf("타도 좋습니다");
	else
		printf("죄송합니다");

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int x;
	
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &x);

	printf("문자:%c입니다.", x);
	
	return 0;
}
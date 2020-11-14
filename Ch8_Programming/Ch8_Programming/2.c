#include <stdio.h>
#pragma warning(disable:4996)

void check_alpha() {
	char alph;

	printf("문자를 입력하시오: ");
	scanf("%c", &alph);

	if ((alph >= 'a') && (alph <= 'z'))
		printf("%c는 알파벳 문자입니다.", alph);
	else
		printf("%c는 알파벳 문자가 아닙니다.", alph);
}

int main(void) {
	check_alpha();

	return 0;
}
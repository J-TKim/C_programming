#include <stdio.h>
#pragma warning(disable:4996)

void check_alpha() {
	char alph;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &alph);

	if ((alph >= 'a') && (alph <= 'z'))
		printf("%c�� ���ĺ� �����Դϴ�.", alph);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", alph);
}

int main(void) {
	check_alpha();

	return 0;
}
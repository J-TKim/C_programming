#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int up_chr(char* s)
{
	int i;
	for (i = 0; i < strlen(s); i++) {
		s[i] -= 32;
	}
	return s;
}

int main(void) {
	char string[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", string);

	printf("��ȯ�� ���ڿ�: %s", up_chr(string));

	return 0;
}
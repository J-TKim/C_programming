#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

char* DeleteSpace(char s[])

{
	char* str = (char*)malloc(sizeof(s));

	int i, k = 0;

	for (i = 0; i < strlen(s); i++)

		if (s[i] != ' ') str[k++] = s[i];

	str[k] = '\0';

	return str;
}

int main(void) {
	char string[100];
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[^\n]s", string);

	printf("%s", DeleteSpace(string));
	
	return 0;
}
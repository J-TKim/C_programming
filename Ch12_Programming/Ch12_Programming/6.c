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
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s", string);

	printf("변환된 문자열: %s", up_chr(string));

	return 0;
}
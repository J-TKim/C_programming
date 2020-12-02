#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#define SIZE 100

int str_chr(char* s, int c)
{
	int i;
	int count = 0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c)
			count++;
	}
	return count;
}

int main(void) {
	char string[100];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s", string);

	for (int i = 97; i < 123; i++) {
		printf("%c: %d\n", i, str_chr(&string, i));
	}
	

	return 0;
}
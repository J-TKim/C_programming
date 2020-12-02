#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)


int main(void) {
	char str[100];
	int count = 0; int i = 0;

	printf("문장을 입력하시오: ");
	scanf("%[^\n]s", str);
	if (!isspace(str[0]))
		count++;
	for (i; i < strlen(str) - 1; i++) {
		if (isspace(str[i]) && !isspace(str[i + 1]))
			count++;
	}
	printf("%d\n", count);
}
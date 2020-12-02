#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main(void) {

	char s[80];
	char* ptr[80];
	int i = 0;
	int j;

	char ch1[20], ch2[20];

	printf("문자열을 입력하시오: ");
	gets_s(s, 80);

	ptr[0] = strtok(s, " ");

	printf("찾을 문자열: ");
	gets_s(ch1, 20);

	printf("바꿀 문자열: ");
	gets_s(ch2, 20);

	while (ptr[i] != NULL)
	{
		ptr[i + 1] = strtok(NULL, " ");
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (strcmp(ptr[j], ch1) == 0)
			printf("%s", ch2);
		else
			printf("%s ", ptr[j]);
	}
	

	printf("\n ");
	return 0;
}
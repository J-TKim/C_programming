#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void)
{

	char s[100];
	char* ptr[100];
	int i = 0;
	int j;

	printf("���� �̸��� �빮�ڷ� �Է��Ͻÿ�: ");
	gets_s(s, 100);

	ptr[0] = strtok(s, " ");
	

	while (ptr[i] != NULL)
	{
		ptr[i + 1] = strtok(NULL, " ");
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%s ", strlwr(ptr[j]));
	}

	printf("\n ");
	return 0;
}

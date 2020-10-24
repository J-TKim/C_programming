#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	char c;
	printf("문자를 입력하시오: ");
	c = getchar();

	switch (c) {

	case 'C':
	case 'c':
		printf("Circle \n"); break;

	case 'T':
	case 't':
		printf("Triangle \n"); break;

	case 'R':
	case 'r':
		printf("Rectangle \n"); break;

	default: printf("Unknown \n"); break;
	}

	return 0;
}

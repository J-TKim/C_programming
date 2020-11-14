#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int b_rand()
{
	return rand() % 2;
}

int main(void)
{
	int inp;

	while (1) {
		printf("앞면 또는 뒷면(1 또는 0):");
		scanf(" %d", &inp);

		if (inp == b_rand())
			printf("맞았습니다.\n");
		else
			printf("틀렸습니다.\n");

		printf("계속하시겠습니다?(y 또는 n):");
		int i;
		scanf("%d", &i);
		char c1 = getchar();

		if (c1 == 'n')
			break;
	}

	return 0;
}

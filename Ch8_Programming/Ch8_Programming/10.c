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
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0):");
		scanf(" %d", &inp);

		if (inp == b_rand())
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("����Ͻðڽ��ϴ�?(y �Ǵ� n):");
		int i;
		scanf("%d", &i);
		char c1 = getchar();

		if (c1 == 'n')
			break;
	}

	return 0;
}

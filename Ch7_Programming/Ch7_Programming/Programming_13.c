#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int n, r, result, i;

	printf("n�� ��:  ");
	scanf("%d", &n);
	
	printf("r�� ��:  ");
	scanf("%d", &r);
	
	result = 1;

	for (i = n; i >= (n - r - 1); i--)
		result = result * i;
	printf("������ ���� %d�Դϴ�.\n", result);

	return 0;
}

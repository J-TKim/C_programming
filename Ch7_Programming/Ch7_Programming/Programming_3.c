#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;


	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("���: ");
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}

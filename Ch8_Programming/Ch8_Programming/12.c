#include <stdio.h>
#pragma warning(disable:4996)

void print_value(int n) {
	int i = 0;

	while (i < n) {
		printf("*");
		i++;
	}
	printf("\n");
}

int main(void) {
	int n;
	
	while (1) {
		printf("���� �Է��Ͻÿ�(����� ����): ");
		scanf("%d", &n);

		if (n < 0)
			break;

		print_value(n);
	}
}
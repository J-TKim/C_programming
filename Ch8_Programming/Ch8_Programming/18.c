#include <stdio.h>
#pragma warning(disable:4996)

void print_bl() {
	printf("================================\n");
	printf("MENU\n");
	printf("================================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");
	printf("���ϴ� �޴��� �����Ͻÿ�(1-5): ");
}



int main(void) {
	while (1) {
		int c, x1, x2;
		print_bl();
		scanf("%d", &c);

		printf("���� 2���� �Է��Ͻÿ�: ");
		scanf("%d %d", &x1, &x2);

		printf("������ :");

		if (c == 1) printf("%d", x1 + x2);
		else if (c == 2) printf("%d", x1 - x2);
		else if (c == 3) printf("%d", x1 * x2);
		else if (c == 4) printf("%f", (float)(x1 / x2));
		else if (c == 5) printf("%d", x1 % x2);

		printf("\n����Ϸ��� y�� �����ÿ�: ");
		char c1 = getchar();
		if (c1 != 'y')
			break;
	}
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

void print_bl() {
	printf("================================\n");
	printf("MENU\n");
	printf("================================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셉\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");
	printf("원하는 메뉴를 선택하시오(1-5): ");
}



int main(void) {
	while (1) {
		int c, x1, x2;
		print_bl();
		scanf("%d", &c);

		printf("숫자 2개를 입력하시오: ");
		scanf("%d %d", &x1, &x2);

		printf("연산결과 :");

		if (c == 1) printf("%d", x1 + x2);
		else if (c == 2) printf("%d", x1 - x2);
		else if (c == 3) printf("%d", x1 * x2);
		else if (c == 4) printf("%f", (float)(x1 / x2));
		else if (c == 5) printf("%d", x1 % x2);

		printf("\n계속하려면 y를 누르시오: ");
		char c1 = getchar();
		if (c1 != 'y')
			break;
	}
	return 0;
}
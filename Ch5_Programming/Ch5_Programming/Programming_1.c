#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int input1, input2;
	printf("2���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &input1, &input2);

	printf("��: %d ", input1 / input2);
	printf("������ : %d", input1 % input2);

	return 0;
}

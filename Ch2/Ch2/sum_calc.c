// ����ڷκ��� �Է¹��� 2���� ������ ���� ����Ͽ� ���
#pragma warning (disable : 4996)
#include <stdio.h>

int main(void) {
	// ������ ������ ���� ����
	int x, y, sum;

	// �ϳ��� ������ �Է¹޾� x�� ����
	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	// �ϳ��� ������ �Է¹޾� y�� ����
	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	// ��� �� ���
	sum = x + y;
	printf("�� ���� ��: %d", sum);

	return 0;
}
#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) {
	int ysalary, msalary;

	printf("������ �Է��Ͻÿ�(����: ����):");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("�� ���ɾ�(����: ����): %d\n", msalary);

	return 0;
}
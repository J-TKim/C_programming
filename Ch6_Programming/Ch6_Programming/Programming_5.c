#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int h, age;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf("%d", &h);

	printf("���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);

	if (h >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�");
	else
		printf("�˼��մϴ�");

	return 0;
}
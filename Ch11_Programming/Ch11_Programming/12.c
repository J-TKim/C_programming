#include <stdio.h>
#pragma warning(disable:4996)


void get_int(int* px, int* py) {
	printf("�ΰ��� ������ �Է��Ͻÿ�(��: 10 20): ");
	scanf("%d %d", &*px, &*py);
}

int main(void) {
	int x, y;
	get_int(&x, &y);
	
	printf("������ ���� %d", x + y);

	return 0;
}
#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char c;
	printf("���ڸ� �Է��Ͻÿ� : ");
	c = getchar();
	switch(c){
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("�����Դϴ�.\n");
		break;
	default:
		printf("�����Դϴ�.\n");
	}
	return 0;
}
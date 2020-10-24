#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char c;
	printf("문자를 입력하시오 : ");
	c = getchar();
	switch(c){
	case 'a':
	case 'i':
	case 'o':
	case 'u':
	case 'e':
		printf("모음입니다.\n");
		break;
	default:
		printf("자음입니다.\n");
	}
	return 0;
}
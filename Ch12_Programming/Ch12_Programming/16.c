#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main(void) {

	char s[80];
	char* ptr[80];
	int i = 0, j, idx;

	char ch1[20], ch2[20];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(s, 80);

	for (i = 0; i < strlen(s); i++) {
		for (j = 0; j < strlen(s); j++) {
			idx = i + j;
			if (idx >= strlen(s)) {
				idx -= strlen(s);
			}
			printf("%c", s[idx]);
		}
		printf("\n");
	}



	printf("\n ");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#define SIZE 30

int main(void) {
	FILE* fp1;
	char filename1[SIZE];
	char buffer1[SIZE];
	int count = 0;

	printf("���� �̸��� �Է��Ͻÿ�: ");
	gets_s(filename1, SIZE);


	if ((fp1 = fopen(filename1, "r")) == NULL)
		printf("test1.txt ���� ���� ����\n");


	while (feof(fp1) == 0) {
		char ch = fgetc(fp1);
		if (isprint(ch) != 0)
			count++;
	}

	printf("������ ������ %d", count);

	fclose(fp1);

	return 0;
}
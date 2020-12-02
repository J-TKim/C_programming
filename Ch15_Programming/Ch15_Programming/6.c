#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#define SIZE 30

int main(void) {
	FILE* fp1;
	char filename1[SIZE];
	char buffer1[SIZE];
	int count = 0;

	printf("파일 이름을 입력하시오: ");
	gets_s(filename1, SIZE);


	if ((fp1 = fopen(filename1, "r")) == NULL)
		printf("test1.txt 파일 오픈 실패\n");


	while (feof(fp1) == 0) {
		char ch = fgetc(fp1);
		if (isprint(ch) != 0)
			count++;
	}

	printf("문자의 개수는 %d", count);

	fclose(fp1);

	return 0;
}
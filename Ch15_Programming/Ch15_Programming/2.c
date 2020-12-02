#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#define SIZE 20

int main(void) {
	FILE* fp1;
	FILE* fp2;
	char filename1[SIZE];
	char filename2[SIZE];

	printf("첫번째 파일 이름: ");
	gets_s(filename1, SIZE);

	printf("두번째 파일 이름: ");
	gets_s(filename2, SIZE);

	if ((fp1 = fopen(filename1, "r")) == NULL)
		printf("test1.txt 파일 오픈 실패\n");

	if ((fp2 = fopen(filename2, "r")) == NULL)
		printf("test2.txt 파일 오픈 실패\n");

	while (feof(fp1) == 0)
		fputc(toupper(fgetc(fp1)), fp2);
	
	fclose(fp1);
	fclose(fp2);
}
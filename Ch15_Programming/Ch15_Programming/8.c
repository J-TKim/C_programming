#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void) {
	FILE* fp1;
	FILE* fp2;
	float buffer1[SIZE];
	float buffer2[SIZE];

	if ((fp1 = fopen("sample1.dat", "w")) == NULL)
		printf("test1.txt 파일 오픈 실패\n");

	if ((fp2 = fopen("sample2.txt", "w")) == NULL)
		printf("test2.txt 파일 오픈 실패\n");

	for (int i = 0; i < 100; i++) {
		buffer1[i] = rand() / RAND_MAX;
		buffer2[i] = rand() / RAND_MAX;
	}

	for (int i = 0; i < 100; i++) {
		fwrite(buffer1, sizeof(int), SIZE, fp1);
		fprintf(fp2, "%f", buffer1[i]);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
	FILE* fp1;
	FILE* fp2;
	char filename1[SIZE];
	char filename2[SIZE];
	char buf1[SIZE];
	char buf2[SIZE];

	printf("첫번째 파일 이름: ");
	gets_s(filename1, SIZE);

	printf("두번째 파일 이름: ");
	gets_s(filename2, SIZE);

	if ((fp1 = fopen(filename1, "r")) == NULL)
		printf("test1.txt 파일 오픈 실패\n");

	if ((fp2 = fopen(filename2, "r")) == NULL)
		printf("test2.txt 파일 오픈 실패\n");

	while (!feof(fp1) && !feof(fp2)) {
		fgets(buf1, SIZE, fp1);
		fgets(buf2, SIZE, fp2);

		if (strcmp(buf1, buf2) != 0) {
			printf("%s%s", buf1, buf2);
			fclose(fp1);
			fclose(fp2);
			
			return 0;
		}
	}

	printf("파일은 서로 일치함\n");
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
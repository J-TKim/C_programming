#include <stdio.h>
#define SIZE 100

int main(void) {
	FILE* fp1;
	char buffer[SIZE];

	if ((fp1 = fopen("test1.txt", "r")) == NULL)
		printf("test1.txt 파일 오픈 실패");

	for (int i = 0; feof(fp1) == 0; i++) {
		fgets(buffer, SIZE, fp1);
		printf("%d: ", i + 1);
		puts(buffer);
	}

	fclose(fp1);

	return 0;
}
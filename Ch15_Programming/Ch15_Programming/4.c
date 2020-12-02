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

	printf("ù��° ���� �̸�: ");
	gets_s(filename1, SIZE);

	printf("�ι�° ���� �̸�: ");
	gets_s(filename2, SIZE);

	if ((fp1 = fopen(filename1, "r")) == NULL)
		printf("test1.txt ���� ���� ����\n");

	if ((fp2 = fopen(filename2, "r")) == NULL)
		printf("test2.txt ���� ���� ����\n");

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

	printf("������ ���� ��ġ��\n");
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
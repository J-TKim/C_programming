#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void) {
	FILE* fp;
	char filename[SIZE];
	char buffer[SIZE];

	printf("���� �̸�: ");
	gets_s(filename, SIZE);

	if ((fp = fopen(filename, "r")) == NULL)
		printf("������ ������ ����");

	char arr[SIZE];
	printf("�˻��� �ܾ�: ");
	gets_s(arr, SIZE);

	for (int i = 0; feof(fp) == 0; i++) {
		char* p;
		fgets(buffer, SIZE, fp);

		if (strstr(buffer, arr) != NULL) {
			printf("%s:%d", filename, i + 1);
			puts(buffer);
		}
	}

	fclose(fp);

	return 0;
}
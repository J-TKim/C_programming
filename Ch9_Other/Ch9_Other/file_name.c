# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname[20];
	char ext[5];
	printf("���ϸ�? ");
	gets_s(fname, 20);
	printf("Ȯ����? ");
	gets_s(ext, 5);

	printf("��ü ���ϸ�: %s.%s", fname, ext);
}
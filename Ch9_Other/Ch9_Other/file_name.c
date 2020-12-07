# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname[20];
	char ext[5];
	printf("파일명? ");
	gets_s(fname, 20);
	printf("확장자? ");
	gets_s(ext, 5);

	printf("전체 파일명: %s.%s", fname, ext);
}
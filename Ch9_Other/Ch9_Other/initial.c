# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char name[20];
	printf("영문 이름? ");
	gets(name);

	printf("이니셜: ");
	for (int i = 0; name[i] != '\0'; i++) {
		if ('A' <= name[i] && name[i] <= 'Z')
			printf("%c", name[i]);
	}

}
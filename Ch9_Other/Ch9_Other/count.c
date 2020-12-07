# include <stdio.h>

int main(void) {

	char str[100];
	int cnt = 0;

	printf("문자열­? ");
	gets_s(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if ('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z')
			cnt++;
	}
	printf("영문자의 개수: %d", cnt);
}
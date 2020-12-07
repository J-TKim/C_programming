# include <stdio.h>
# include <string.h>

char reverse_str(char* str) {
	char tmp;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		
	}
	for (int i = 0; i<len/2; i++) {

		tmp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = tmp;
	}
	return str;
}

int main(void) {

	char str[100];
	printf("문자열? ");
	gets(str);

	reverse_str(str);
	printf("역순으로 된 문자열: %s", str);
}
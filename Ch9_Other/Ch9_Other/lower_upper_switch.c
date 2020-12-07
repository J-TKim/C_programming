# include <stdio.h>
# include <ctype.h>

int main(void) {

	char str[100];
	printf("문자열­? ");
	gets_s(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}

		else {
			str[i] = tolower(str[i]);
		}
	}

	printf("변환 후: ");
	printf("%s", str);

}
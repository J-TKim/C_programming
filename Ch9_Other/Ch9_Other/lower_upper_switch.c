# include <stdio.h>
# include <ctype.h>

int main(void) {

	char str[100];
	printf("���ڿ���? ");
	gets_s(str, 100);

	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}

		else {
			str[i] = tolower(str[i]);
		}
	}

	printf("��ȯ ��: ");
	printf("%s", str);

}
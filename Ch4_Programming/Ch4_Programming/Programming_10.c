#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char beep = "\a";
	printf("%c화재가 발생하였습니다.%c", beep, beep);

	return 0;
}
#include <stdio.h>
#include <limits.h>

int main(void) {
	short s_money = SHRT_MAX; // �ִ����� �ʱ�ȭ. 32767
	unsigned short u_money = USHRT_MAX; // �ִ����� �ʱ�ȭ. 65535

	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %d\n", u_money);
	
	return 0;

}
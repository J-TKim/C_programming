#include <stdio.h>

typedef struct _employee {
    char name[10];
    int age;
}employee;

employee list[] = { {"ȫ�浿1", 20},
{"ȫ�浿2", 21},
    {"ȫ�浿3", 32} };

int main()
{
    int size;
    size = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < 10; i++) {
        if (list[i].age >= 20 && list[i].age <= 30) {
            printf("�̸�=%s ����=%d\n", list[i].name, list[i].age);
        }
    }

    return 0;
}
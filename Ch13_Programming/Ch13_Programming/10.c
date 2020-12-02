#include <stdio.h>

typedef struct _employee {
    char name[10];
    int age;
}employee;

employee list[] = { {"È«±æµ¿1", 20},
{"È«±æµ¿2", 21},
    {"È«±æµ¿3", 32} };

int main()
{
    int size;
    size = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < 10; i++) {
        if (list[i].age >= 20 && list[i].age <= 30) {
            printf("ÀÌ¸§=%s ³ªÀÌ=%d\n", list[i].name, list[i].age);
        }
    }

    return 0;
}
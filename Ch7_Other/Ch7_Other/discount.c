#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 5

int dis_arr(int Arr1[], int size, int dis, int Arr2[]) {
    for (int i = 0; i < size; i++) {
        Arr2[i] = Arr1[i] * dis / 100;
        printf("����:\t%d --> ���ΰ�:\t%d\n", Arr1[i], Arr2[i]);
    }

    return Arr2;
}


int main(void) {
    int Arr1[SIZE], Arr2[SIZE];
    int dis;

    printf("��ǰ�� 5���� �Է��Ͻÿ�: ");
    scanf("%d %d %d %d %d", &Arr1[0], &Arr1[1], &Arr1[2], &Arr1[3], &Arr1[4]);

    printf("������(%%)? ");
    scanf("%d", &dis);
    printf("\n");

    dis_arr(Arr1, SIZE, dis, Arr2);

    printf("\n");

    return 0;
}
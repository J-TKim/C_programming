#include <stdio.h>

#include <string.h>

#define SIZE 20

#pragma warning(disable:4996)


typedef struct {

	char title[20];

	char singer[20];

	int class;

} Music;



int i;

int num[SIZE] = { 0 };



void add_music(Music* list);

void print_music(Music* list);

void search_music(Music* list, int size);

void delete_music(Music* list);



void main() {

	Music list[SIZE];

	int n, result = 1;



	printf("======================\n");

	printf(" 1. �߰�(ADD)\n");

	printf(" 2. ���(PRINT)\n");

	printf(" 3. �˻�(SEARCH)\n");

	printf(" 4. ����(DELETE)\n");

	printf(" 5. ����(EXIT)\n");

	printf("======================\n");



	while (result == 1) {

		printf("�޴��� �����Ͻÿ�: ");

		scanf("%d", &n);

		fflush(stdin);



		switch (n) {

		case 1:

			add_music(list);

			break;

		case 2:

			print_music(list);

			break;

		case 3:

			search_music(list, SIZE);

			break;

		case 4:

			delete_music(list);

			break;

		case 5:

			result = 0;

		}

	}

}



void add_music(Music* list) {

	do {

		printf("1������ %d������ Ʈ���� �ֽ��ϴ�. �� �� Ʈ���� �����Ͻðڽ��ϱ�?", SIZE);

		scanf("%d", &i);

		getchar();

		fflush(stdin);

		if (num[i - 1] == 1)

			printf("�̹� ����Ǿ��ִ� Ʈ���Դϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");

	} while (num[i - 1] == 1);



	printf("����: ");					gets(list[i - 1].title);

	printf("����: ");					gets(list[i - 1].singer);

	printf("����(��=0, ����=1, Ŭ����=2, ��=3): ");	scanf("%d", &list[i - 1].class);

	fflush(stdin);

	num[i - 1] = 1;

	printf("\n");

}



void print_music(Music* list) {

	do {

		printf("�� �� Ʈ���� ���������� ����Ͻðڽ��ϱ�? ");

		scanf("%d", &i);

		if (num[i - 1] == 0)

			printf("�ش� Ʈ���� ����� ���������� �����ϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");

	} while (num[i - 1] == 0);

	printf("����: %s\n", list[i - 1].title);

	printf("����: %s\n", list[i - 1].singer);

	switch (list[i - 1].class) {

	case 0: printf("����: ��\n"); break;

	case 1: printf("����: ����\n"); break;

	case 2: printf("����: Ŭ����\n"); break;

	case 3: printf("����: ��\n"); break;

	}

	printf("\n");

}



void search_music(Music* list, int size) {

	char searchName[20];



	printf("�˻��ϰ��� �ϴ� �뷡 ������ �Է��Ͻÿ�: ");

	gets(searchName);



	for (i = 0; i < size; i++) {

		if (strcmp(searchName, list[i].title) == 0) {

			printf("����: %s\n", list[i].title);

			printf("����: %s\n", list[i].singer);

			switch (list[i].class) {

			case 0: printf("����: ��\n"); break;

			case 1: printf("����: ����\n"); break;

			case 2: printf("����: Ŭ����\n"); break;

			case 3: printf("����: ��\n"); break;

			}

		}

		else {

			printf("ã���ô� �뷡�� �����ϴ�\n");

			break;

		}

	}

	printf("\n");

}



void delete_music(Music* list) {

	do {

		printf("�� �� Ʈ���� ���������� �����Ͻðڽ��ϱ�? ");

		scanf("%d", &i);

		if (num[i - 1] == 0)

			printf("�ش� Ʈ���� ����� ���������� �����ϴ�. �ٸ� Ʈ����ȣ�� �Է��Ͻÿ�\n");

	} while (num[i - 1] == 0);



	num[i - 1] = 0;

	printf("%d�� Ʈ���� ���������� �����Ǿ����ϴ�\n", i - 1);

	printf("\n");

}



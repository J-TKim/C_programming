# include <stdio.h>

struct song {
	char name[20];
	char artist[20];
	char genre[20];
};

enum genre { ballad, hiphop, soul, dance, pop };

int main(void) {

	struct song songs[3] = { {"������", "������", "ballad"}, {"���� ��", "�����ī��", "hip-hop"}, {"Sixteen", "Ellie Goulding", "soul"} };

	printf("����\t\t��Ƽ��Ʈ\t\t�帣\n");

	for (int i = 0; i < 3; i++) {

		printf("%s\t\t%s\t\t%s\n", songs[i].name, songs[i].artist, songs[i].genre);
	
	}
}
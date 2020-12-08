# include <stdio.h>

struct song {
	char name[20];
	char artist[20];
	char genre[20];
};

enum genre { ballad, hiphop, soul, dance, pop };

int main(void) {

	struct song songs[3] = { {"밤편지", "아이유", "ballad"}, {"서울 밤", "어반자카파", "hip-hop"}, {"Sixteen", "Ellie Goulding", "soul"} };

	printf("제목\t\t아티스트\t\t장르\n");

	for (int i = 0; i < 3; i++) {

		printf("%s\t\t%s\t\t%s\n", songs[i].name, songs[i].artist, songs[i].genre);
	
	}
}
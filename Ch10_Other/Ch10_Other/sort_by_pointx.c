# include <stdio.h>

struct point {
	int x, y;
};

int main(void) {

	struct point pt[10] = { {7,4}, {12,93}, {22,31}, {1,20}, {34,53}, {41,2}, {32,9}, {21,31},{8,2},{3,5} };
	int size = 10;

	printf("<<정렬 전>>\n");
	for (int i = 0; i < size; i++)
		printf("(%d, %d)", pt[i].x, pt[i].y);
	printf("\n");

	int index_min, tmp;

	for (int i = 0; i < size - 1; i++) {
		index_min = i;
		for (int j = i + 1; j < size; j++) {
			if (pt[index_min].x > pt[j].x)
				index_min = j;
		}
		if (i != index_min) {
			tmp = pt[i].x;
			pt[i].x = pt[index_min].x;
			pt[index_min].x = tmp;
		}

	}

	printf("<<정렬 후>>\n");
	for (int i = 0; i < size; i++)
		printf("(%d, %d)", pt[i].x, pt[i].y);

}
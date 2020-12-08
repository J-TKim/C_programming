# include <stdio.h>
# pragma warning (disable:4996)

struct rect {
	int x1, y1;
	int x2, y2;
};

void print_rect(struct rect* p) {

	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]", p->x1, p->y1, p->x2, p->y2);
}

int main(void) {

	struct rect rect1;
	struct rect* p = &rect1;

	printf("직사각형의 좌하단점(x ,y)? ");
	scanf("%d %d", &rect1.x1, &rect1.y1);
	
	getchar();

	printf("직사각형의 우상단점(x, y)? ");
	scanf("%d %d", &rect1.x2, &rect1.y2);

	print_rect(p);

}
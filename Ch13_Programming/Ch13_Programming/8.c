#include <stdio.h>
#include <string.h>    
#define PI 3.14


struct point {
	int x, y;
};

typedef struct circle {
	struct point center;
	double radius;
} CIRCLE;

double area(struct circle c) {
	double A = c.radius * c.radius * PI;

	return A;
}

double perimeter(struct circle c) {
	double A = c.radius * 2 * PI;

	return A;
}
int main(void) {
	struct point p1 = { 0, 0 };
	CIRCLE c1;
	c1.center = p1;
	c1.radius = 10;

	printf("원의 중심: %d %d\n", p1.x, p1.y);
	printf("원의 반지름: %f\n", c1.radius);

	printf("원의 면적=%f, 원의 둘레=%f", area(c1), perimeter(c1));
}
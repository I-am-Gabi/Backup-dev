#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int x, y;
} Point;

Point* func() {
	Point a;
	Point *b = (Point*)malloc(sizeof(Point));
	a.x = a.y = 1;
	b->x = b->y = 1;

	return b;
}


int main(void) {
	Point *b = func();
	printf("(%i, %i)\n", b->x, b->y);
	return 0;
}
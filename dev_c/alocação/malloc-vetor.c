#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int x, y;
} Point;

Point* func() {
	Point a;
	Point *b = (Point*)malloc(10 * sizeof(Point));

	for (int i = 0; i < 10; ++i) 
		b[i].x = b[i].y = 10;

	return b;
}


int main(void) {
	Point *b = func();
	printf("(%i, %i)\n", b[6].x, b[6].y);
	return 0;
}
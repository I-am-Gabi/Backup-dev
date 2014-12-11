#include <stdio.h>

int main() {
	int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
	scanf("%i %i %i %i %i %i %i %i", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	if (x4 - x3 > x2 - x1) {
		x5 = x1;
		x1 = x3;
		x3 = x5;
		x5 = x2;
		x2 = x4;
		x4 = x5;
		//printf("oi");
	}
	if (y4 - y3 > y2 - y1) {
		y5 = y1;
		y1 = y3;
		y3 = y5;
		y5 = y2;
		y2 = y4;
		y4 = y5;
		//printf("oi");
	}
	if ((x1 < x3 && x3 < x2) || (x1 < x4 && x4 < x2)) {
		if ((y1 < y3 && y3 < y2) || (y1 < y4 && y4 < y2)) {
			printf("S");
			return 0;
		}
	}
	printf("N");
	return 0;
}

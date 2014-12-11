#include <stdio.h>

int potR(int x, int n) {
	if (x == 0)
		return 1;
	else 
		return x * potR(x, n-1);
}
#include <stdio.h>

int X(int a) {
	if (a<= 0)
		return 0;
	else
		return a + X(a -1);
}
#include <stdio.h>

int main (void) {
	int indefinido[4];
	int i;
	for (i=0; i < 4; i++) {
		printf("%2d%14d\n", i , indefinido[i]);
	}
	return 0;
}
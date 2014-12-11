#include <stdio.h>

void misterio(int *p, int *q) {
	// p = i
	// q = j
	int r = *p;
	*p = *q;
	*q = r;
}

int main (void) {
	int i = 1;
	int j = 2;
	misterio(&i, &j); //passo o endereço de i e de j
	printf("%i %i\n", i, j);
	return 0;
}
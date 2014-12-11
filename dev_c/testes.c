#include <stdio.h>

int main() {
	int i = 8, j, k;

	j = ++i;
	printf("%i %i\n", i, j);

	i = 8;
	j = 0;

	j = i++;
	printf("%i %i\n", i, j);
	return 0;
}
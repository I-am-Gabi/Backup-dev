#include <stdio.h>

int soma_arranjo () {
	
}

int main (void) {
	float numero[10];
	int i;
	for (i=0;i<10; ++i) {
		scanf("%i", &numero[i]);
	}
	for (i=9; i >= 0; --i) {
		printf("%i\n", numero[i]);
	}
	return 0;
}
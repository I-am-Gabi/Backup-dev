#include <stdio.h>

int imprime_alguma_coisa(int n) {
	if (n != 0){
		imprime_alguma_coisa(n/2);
		printf("%c\n", '0' + n % 2 );
	}
}

int main(void) {
	imprime_alguma_coisa(10);
	return 0;
}
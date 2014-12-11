#include <stdio.h>

int main() {
	int posicao = 12;
	int posicao2 = 15;
	int *posicao_p = &posicao;
	printf("posicao é %p ", posicao_p);
	//&posicao_p = &posicao_p; 
        printf("posicao é %p ", posicao_p);
	printf("valor é %i ", posicao);
	return 0;
}

#include <stdio.h>

int main() {
	int a = 12;
	int *aponteiro = NULL;
	*aponteiro = &a;
	aponteiro = &a;
	printf("Conteudo de a : %i\n", a);
	printf("Endereço de a : %p\n", &a);
	printf("Conteudo de aponteiro : %i\n", *aponteiro);
	printf("Endereço de a : %p\n", &aponteiro);
	printf("Aponteiro : %p \n\n", aponteiro);
	printf("---------------------------------\n");
	
	a += 10;
	
	printf("Conteudo de a : %i\n", a);
	printf("Endereço de a : %p\n", &a);
	printf("Conteudo de aponteiro : %i\n", *aponteiro);
	printf("Endereço de a : %p\n", &aponteiro);
	printf("Aponteiro : %p\n", aponteiro);
	printf("---------------------------------\n");
	
	*aponteiro += 10;
	
	printf("Conteudo de a : %i\n", a);
	printf("Endereço de a : %p\n", &a);
	printf("Conteudo de aponteiro : %i\n", *aponteiro);
	printf("Endereço de a : %p\n", &aponteiro);
	printf("Aponteiro : %p \n\n", aponteiro);
	printf("---------------------------------\n");
	
	printf("Conteudo de a : %i\n", a);
	printf("Endereço de a : %p\n", &a);
	printf("Conteudo de aponteiro : %i\n", *aponteiro);
	printf("Endereço de a : %p\n", &aponteiro);
	printf("Aponteiro : %p \n\n", aponteiro);
	printf("---------------------------------\n");
	 
	
	return 0;
}

# include <stdio.h>
# include <stdlib.h>

struct cadastro {
	char nome[50];
	int idade;
	char rua[50];
	int numero;
};

int main() {
	struct cadastro c;
 
	fgets(c.nome, sizeof(c.nome), stdin); 
	
	scanf("%d", &c.idade);
	
	fgets(c.rua, sizeof(c.rua), stdin);

	scanf("%d", &c.numero);  

	printf("%s\n", c.nome);
	printf("%i\n", c.idade);
	printf("%s\n", c.rua);
	printf("%i\n", c.numero);

	
	return 0;
}
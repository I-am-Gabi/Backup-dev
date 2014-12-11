#include <stdio.h>
#include <string.h>

typedef struct 
{
	int codigo;
	char descricao[50];
	float valor;
	int estoque;
} Produto; //var global

Produto prod;

void atribuicao_simples() {
	prod.codigo = 10;
	//prod.descricao[0] = 'a';
	strcpy( prod.descricao, "test Sou demais" );
	prod.valor = 3.4;
	prod.estoque = 10;
	printf("%s\n", prod.descricao);
}

void atribuir_inicializacao() {
	Produto produto =  { 104, "caneta", 3.25, 1598 };
	printf("%s\n", produto.descricao);
}

void atribuir_inicializacao_list() {
	Produto produtos[3] = { 
									 { 104, "caneta", 3.25, 1598 },
	                               	 { 105, "lapis", 2., 2365 },
	                               	 { 106, "caderno", 10.85, 127 } 
                               	 };
    printf("%s\n", produtos[1].descricao);
}

void struct_interno()
{
    struct   /* nome do registro omitido */
    {
        int codigo;
        char descricao[50];
        float valor;
        int estoque;
    } produto = { 104, "caneta", 3.25, 1598 };
 

    printf( "descricao      = %s\n",   produto.descricao );
    printf( "estoque        = %i\n",   produto.estoque );
    printf( "valor unitario = %.2f\n", produto.valor );
    printf( "valor total    = %.2f\n", produto.estoque * produto.valor );
  
}

int main() { 
	printf("Olá\n");
	atribuicao_simples();
	atribuir_inicializacao();
	atribuir_inicializacao_list();
	struct_interno();

	Produto p = { 104, "caneta", 3.25, 1598 };
	printf("-------%s------\n", p.descricao);
}

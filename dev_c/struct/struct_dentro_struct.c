#include <stdio.h>

typedef struct {
	int dia;
	char mes[4];
	int ano;
} Data;

typedef struct 
{
	char nome[100];
	char sexo;
	Data aniversario;
} Pessoa;


int main() {
	Pessoa Gabriela = { "Gabriela", 'F', { 6, "JAN", 1995 } };
	printf("%s\n", Gabriela.nome);

	Gabriela.aniversario.dia = 12;
	printf("%i\n", Gabriela.aniversario.dia);

	Data d = { 26, "JAN", 1995 };
	Gabriela.aniversario = d;
	printf("%i\n", Gabriela.aniversario.dia);

	Pessoa funcionarios[3] = {
		{ "Gabriela01", 'F', { 6, "JAN", 1995 } },
		{ "Gabriela02", 'F', { 12, "JAN", 1996 } },
		{ "Gabriela03", 'F', { 24, "JAN", 1997 } }	
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("%s\n", funcionarios[i].nome);
	}
}
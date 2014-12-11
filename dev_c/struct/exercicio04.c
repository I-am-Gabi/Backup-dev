#include <stdio.h>

typedef struct 
{
	int matricula;
	float notas[3];
} Aluno;

void le_aluno(Aluno* turma) {
	scanf("%i", &turma->matricula);
	scanf("%f %f %f", &turma->notas[0], &turma->notas[1], &turma->notas[2]);
	//turma = { 12345, {1, 2, 3}};
}

void imprime_turma( Aluno* turm, int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++)
	{
		 printf("Aluno %i: %i %f %f %f\n", i, turm->matricula, turm->notas[0], turm->notas[1], turm->notas[2]);
	}
}

float calcula_media(float* nota, int valor) {
	return 3.5;	
}

int main () {
	Aluno turma[5];
	int i; 
	for (i = 0; i < 5; i++)
	{
		le_aluno(&turma[i]);
		imprime_turma(turma, 5);
	} 
	for (i = 0; i < 5; i++)
	{ 
		float media = calcula_media(turma[i].notas, 3);
		printf("Aluno %i: Media = %f\n", i + 1, media);
	}

	return 0;
}

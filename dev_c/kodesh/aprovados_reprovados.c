/*Aprovados, reprovados e média da turma

Para n>0 alunos de uma determinada turma são dadas 3 notas de provas. 
1) Calcular a média das provas de cada aluno, 
2) a média da classe, 
3) o número de aprovados e o número de reprovados, 
3.1) onde o critério de aprovação é média≥5.0.

Para exemplos de entrada e saída vá para aba "Testes".*/
#include <stdio.h>

int main() {
    int n; //quantidade de alunos
    int cont;
    float media1, media2, media3;
    int aprovados = 0; //guarda quantos alunos foram aprovados
    float media_aluno;
    float media_classe;
    scanf("%d", &n); // n alunos
    for (cont = 1; cont <= n; cont++) {
        scanf("%f", &media1); //media 1
    	scanf("%f", &media2); //media 2
    	scanf("%f", &media3); //media 3
    	media_aluno = media1 + media2 + media3/3;
    	if (media_aluno>= 5.0) {
    		aprovados++;
    	} 
    	media_classe = media_classe + media_aluno/n;
    	printf("Aluno: %i \n", cont);
    	printf("Media: %.1f \n", media_aluno); 
	}
	printf("Media da Turma: %.1f", media_classe);
	printf("Aprovados: %i", aprovados);
	printf("Reprovados: %i ", (n - aprovados));
}

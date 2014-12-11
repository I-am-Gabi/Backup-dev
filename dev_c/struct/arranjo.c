#include <stdio.h>


void imprimir_vetor(int vetor[], int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++)
	{
		printf("%i ", vetor[i]);
	}
	printf("\n\n");
}

void imprimir_matriz( int n, int m, int matriz[3][3]){
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%i ", matriz[i][j]);
		} 
		printf("\n");
	}
}


void algo_vetor(int* vetor){
	printf("--%i--\n", vetor[0]);
	scanf("%i", &vetor[0]);
	printf("--%i--\n", vetor[0]);
}

int main() {
	int vetor[3] = { 1, 2, 3 };
	int matriz[3][3] = {
		{ 1, 2, 3 },
		{ 1, 2, 3 },
		{ 1, 2, 3 },
	};
	imprimir_vetor(vetor, 3);
	imprimir_matriz(3, 3, matriz);
	algo_vetor(vetor);
}
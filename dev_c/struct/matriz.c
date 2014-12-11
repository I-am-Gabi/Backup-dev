#include <stdio.h>
#define LIN 4
#define COL 4

int main() {
	int matriz[LIN][COL] = {
		{ 0, 1, 2, 4},
		{ 3, 4, 5, 6},
		{ 6, 7, 8, 9},
		{ 9, 0, 1, 2},
	}; 
	int i, j;
	for (i = 0; i < LIN; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%2i ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Ocupacao do tipo: %li\n", sizeof(int));
	printf("Ocupacao total: %li\n", LIN * COL * sizeof(int));
}

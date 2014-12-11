#include <stdio.h>  
#include <stdlib.h>
//#include <time.h>   

/* Exercíte-se (1)
 * void soma_arranjo( float u[], float v[], float w[], int tamanho ) {
	int i;
	for (i = 0; i < tamanho; i++) {
		w[i] = u[i] + v[i];
	}
}
 
void imprime (float u[], float v[], float w[], int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++) {
		printf("u[%i] + v[%i] = w[%i]  \n", i, i, i);
		printf("%f + %f = %f  \n", *(u++), v[i], w[i]);
	}
	printf("-----\n");
}
int main( void ) {
    float u[5] = { 0, 1, 2, 3, 4 };
    float v[5] = { 7, 6, 5, 4, 3 };
    float w[5] = { 0 };
    soma_arranjo(u, v, w, 5);
    imprime(u, v, w, 5); 
    return 0;
}


int busca_arranjo(int v[1000], int valor) {
	int i;
	for (i = 0; i < 1000; i++) {
		if (v[i] == valor) {
			return i;
		}
	}
	return -1;
}

void imprime (int vetor[1000]) {
	int i;
	for (i = 0; i < 1000; i++) {
		printf("vator[%i] = %i  \n", i, vetor[i]); 
	}
	printf("-----\n");
}

int main () {
	int i;
	int v[1000] = {0};
	srand((unsigned)time(NULL)); 
	for (i = 0; i < 1000; i++) {
		v[i] = (rand()%10);
	}
	int busca = 3;
	i = busca_arranjo(v, busca);
	if (i != -1) {
		printf("%i", i);
	}
	else if (i == -1) {
		printf("PENINHA\n");
	}
	//imprime(v);
	printf(" %i ", v[i]);
	return 0;  
}



int main () {
	int x = 7;
	int i = 1;
	for (; i < 8; i ++) {
		x = x << i;
		printf("%i ", x);
		x = x >> i;
	}
	return 0;
}

int main () {
	unsigned char byte = UCHAR_MAX;
	return 0;
} 

int main () {
	int x, y, z;
	scanf("%i %i", &y, &z);
	x = y + z;
	printf("X = %i", x);
	return 0;
}*/



 
int main( void )
{
    int i[] = {6, 345, 987};
    int *p = i;
 
    printf( "%i %i %i OI", *p, *(p++), *p++);
    return 0;
}

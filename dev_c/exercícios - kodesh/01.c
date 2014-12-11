#include <stdio.h>

/*int mult(int a, int b) {
	int c = a*b;
	return c;
}

int main () {
	int a, b;
	scanf("%i %i", &a, &b);
	printf("%i", mult(a, b));
	return 0;
}


#include <stdio.h>

void produto_matrizes( int n, int m, int l,
    float matriz1[n][m],
    float matriz2[m][l],
    float matriz3[n][l] ) {    
         
    int soma = 0, mult = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mult = matriz1[i][j] * matriz2[j][i];
            soma += mult;
        }
        printf("%.2f ", soma);
    } 
} 


#include<stdio.h>
int main (){
    int num, i;
    printf("Entre com um numero:\n");
    scanf("%i", &num);
    if (num > 0){
        for(i=0; i<999; i++){
                if(i%3==0 && i%5!=0){
                    printf("%i ", num);
                }
        }
    }*/
    
/*
Escreva um programa que solicite um número inteiro de até 4 dígitos ao usuário e inverta a
ordem de seus algarismos. Por exemplo, se for digitado 5582, o programa deve imprimir 2855. Para
isso você pode usar a seguinte lógica: 5582%10=2 (imprime 2 e pega o quociente), 558%10=8
(imprime 8 e pega o quociente), 55%10=5 (imprime 5 e pega o quociente), 5%10=5 (imprime 5 e
como o quociente é zero então pára). 
  
int main () {
	int x, i;
    printf("Entre com um numeto de ate 4 digitos:\n");
    scanf("%i", &x);
    
    for(i=0; i<4; i++){
		printf("%i", x%10);
		x = x/10;
	}
    
	return 0;
}*/

#include <stdio.h>

int main () {
    int n = 0, cont = 0, linha = 0, coluna = 0;
    scanf("%i", &n);
    int matriz[n][n];
    int i = 0; int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%i", &matriz[i][j]);
            cont =+ matriz[i][j];
        }
        if (cont == 1) {
            linha++;
        } cont = 0;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cont =+ matriz[j][i];
        }
        if (cont == 1) {
            coluna++;
        } cont = 0;
    }
    printf("%i %i", linha, coluna);
    if (linha == n && coluna == n) {
        printf("S");
    }
    else { printf("N"); }
    
    return 0;
}


 

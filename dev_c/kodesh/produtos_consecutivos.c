/*
Produtos consecutivos

Escreva um programa que lê um número inteiro positivo da entrada padrão e 
verifica se ele é igual ao produto de três números naturais e consecutivos. 
Por exemplo, o número 120 é igual a 4x5x6, enquanto para o número 90 não 
existem 3 números naturais consecutivos cujo produto seja 90.

Seu programa deve gerar como saída 'S' se existe 3 números naturais consecutivos 
cujo produto seja o valor lido, ou 'N' caso não exista.
*/
#include <stdio.h>

int main() {
    int n; //numero de entrada
    int cont; 
    int produto;
    scanf("%d", &n); // n 
    for (cont = 1; cont <= (n-1); cont++) { 
    	produto = cont * (cont+1) * (cont+2);
    	if (produto == n) {
    		printf("S");
    		break;
    	} 
    	if (cont == (n-1)) {
    		printf("N");
    	}
	}
}

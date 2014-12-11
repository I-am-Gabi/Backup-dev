/*
Palíndromo

é chamado palíndromo >>>
- Um número inteiro positivo;
- Com mais de um dígito; 

se ele lido da direita para a esquerda ou da esquerda para a direita, tem o mesmo valor. Por exemplo: o número 32423 é palíndromo.

Escreva um programa que lê um valor inteiro positivo da entrada padrão e envia para a saída 
padrão 'S' se o valor lido é um palíndromo ou 'N' caso contrário.
*/

#include <stdio.h>

int main() {
    int n; //n a ser lido 
    int valor_inicial = n; //quardo o valor de n
    int val = n;
    int cont = 0;
    int palindromo;
    scanf("%i", &n);  
    for (; n>0 ;) {
        n = n/10;
        cont++;
    } 
    if (cont > 1) {
    	for (;cont>0;) {
	    	palindromo = palindromo + ((valor_inicial % 10) * (cont * 10))
	    	valor_inicial = valor_inicial/10;
	    	cont = cont / 10;
	    }
    	if (val == valor_inicial){
    		printf("S");
    	}
    	else {
    		printf("N");
    	}
    }
    else {
    		printf("N");
    }    
}
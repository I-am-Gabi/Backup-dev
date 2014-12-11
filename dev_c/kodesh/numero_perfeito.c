/*
Número perfeito

Um número inteiro é chamado de 'perfeito' se ele é igual a soma de seus 
divisores. Por exemplo, 6 é 'perfeito', pois 6 = 1 + 2 + 3.

1) Escreva um programa que lê um número n (inteiro positivo) 
2) envia para a saída todos os números perfeitos menores que n.

Entrada
10
Saída esperada
6
*/

#include <stdio.h>

int main() {
    int n; // n inteiro positivo
    int valor; //valor que vai até o n digitador
    int divisor; //divisor 
    int soma;
    scanf("%i", &n); 
    for (valor = 1; valor < n; valor ++) { 
        soma = 0;
        for (divisor = 1; divisor < valor; divisor++) {
            if (valor % divisor == 0){
                soma = soma + divisor;
            }
        }
        if (soma == valor) {
            printf("%i ", valor);
        }
    } 
    return 0;
}
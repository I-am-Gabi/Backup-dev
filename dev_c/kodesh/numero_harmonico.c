/*Número harmônico
Dado um natural n, determine o número harmônico Hn definido por:

Hn=∑nk=11k 

Por exemplo para n = 4, temos:


H4=1/1+1/2+1/3+1/4=2.083 

É importante que saída tenha 3 décimos de precisão.
Para exemplos de entrada e saída vá para aba "Testes".*/

#include <stdio.h>
/*Entrada
3
Saída esperada
1.833*/

int main() {
    int n;
    float cont;
    float harmonico = 0;
    scanf("%i", &n); // n = 3
    for (cont = 1; cont <= n; cont++) { // cont = 1
        harmonico = harmonico + 1/cont; // 1/1 = 1/1 + 1/2
    }
    printf("%.3f", harmonico);
}
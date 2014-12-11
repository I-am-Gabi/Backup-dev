/*
Soma dos N-ésimos termos de uma sequência

Seja S uma sequência cujos valores iniciais são {1,1,2,4,3,9,4,16,5,...}.

Escreva um programa que, dado um número n (lido da entrada padrão), 
envia para a saída padrão a soma nos n primeiros números da sequência S.
*/
#include <stdio.h>

int main ()
{
    int i, n; 
    int soma = 0; //soma dos n primeiros números 
    scanf("%d", &n); // n termos da sequência
    if (n % 2 == 0) //se a quantidade que eu quero é par
    {
        for (i = 1; i <= n/2; i++)
        {
            soma += i + (i * i);
        }
    }
    else
    {
        for (i = 1; i <= (n-1)/2; i++)
        {
            soma += i + (i * i);
        } 
        soma += (n + 1)/2;
    } 
    printf("%d", soma); 
    return 0;
}
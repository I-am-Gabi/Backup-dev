/*2013.2 Verifique se o número é primo
Dado p inteiro, verificar se p é primo. Se for primo escrever 1 (um) caso 
contrário escrever 0 (zero). Para exemplos de entrada e saída vá para aba "Testes".

Entrada
3
Saída esperada
1

Entrada
4
Saída esperada
0

Entrada
5
Saída esperada
1 */

#include <stdio.h>

int main() {
    int m, a, b, soma;
    m = a = b = soma = 0;
    scanf("%i", &m);
    a=1;
    b=0;
    while (a <= m)
    {
		if ((m%a) == 0)
		{ 
			b++; 
		}
		a++;
	}
	if(b == 2) 
    { 
		printf("1"); 
	}
	else {
		printf("0");
	}
    
    return 0;
}

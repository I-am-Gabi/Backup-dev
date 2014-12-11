/*
Dados n números inteiros positivos, calcular a soma dos que são primos. Para exemplos de entrada e saída vá para aba "Testes".

* Entrada
2 3 4
* Saída esperada
3

* Entrada
5 2 3 5 6 7
* Saída esperada
17

* Entrada
17 90 4 2 5 3 7 11 13 17 50 51 87 23 34 57 72 71
* Saída esperada
152
*/
#include <stdio.h>

int main() {
    int n, m, a, b, soma, cont;
    n = m = a = b = soma = cont = 0;
    scanf("%i", &n);  
    while (cont < n) 
    {  
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
			soma += m; 
		}
		cont++;
    }   
    printf("%i", soma);
    return 0;
}

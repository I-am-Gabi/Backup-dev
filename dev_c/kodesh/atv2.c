/*2013.2 Fatores primos

Dado um número inteiro positivo, determine a sua decomposição em fatores primos, 
* calculando também a multiplicidade de cada fator. 

Exemplo: 
Se n = 600 a saída deve ser
fator 2 multiplicidade 3
fator 3 multiplicidade 1
fator 5 multiplicidade 2

Mais exemplos: 

Entrada: 5 
Saídas: 
fator 5 multiplicidade 1 

Entrada: 80 
Saídas: 
fator 2 multiplicidade 4 
fator 5 multiplicidade 1 

Entrada
5
Saída esperada
fator 5 multiplicidade 1

Entrada
80
Saída esperada
fator 2 multiplicidade 4
fator 5 multiplicidade 1
*/

#include <stdio.h>

int main()
{
  int n, fat = 2, multiplicidade = 0;
  scanf("%d", &n);   
  while (n > 1) 
    {
      multiplicidade = 0;
      while (n % fat == 0) 
        {
          multiplicidade ++;
          n = n / fat; 
        }
      if (multiplicidade != 0) 
        {
          printf("fator %d multiplicidade %d\n", fat, multiplicidade); 
        }
      fat++; 
    }

  return 0;
}

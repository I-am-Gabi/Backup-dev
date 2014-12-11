#include <stdio.h>

int main() {
    int numero, ult, quantidade, valor, primeiro, resul, i, num, divisor;
    numero = ult = valor = primeiro = num = 0;
    divisor = 10;
    i = quantidade = 0;
    scanf("%i", &numero);
    num = numero;
    if (numero == 0) {
        quantidade = 1;
	}
    else {
		while (numero > 0) {
			if (numero != 0)
			{
				quantidade = quantidade + 1;
				numero = numero/10; 
			} 
		} 
    }
    while (i < (quantidade-2)) {
		divisor = divisor * 10;
		i = i + 1;
	}
    resul = num/divisor;
    ult =  num % 10;
    //primeiro = num / (resul);
    if (ult == primeiro) {
        printf("%i %i", ult, resul);
    }
    else if (ult != primeiro) {
        printf("%i %i", ult, resul);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n, cont, valor, mdc, novo_valor, div;
    scanf("%i", &n); //ler a sequencia
    scanf("%i", &novo_valor); //ler o primeiro valor
    for(cont = 0; cont < n; cont++) {
        scanf("%i", &valor); //ler o segundo/terceiro/quarto... valor da sequencia
        for (div = 1; div <= novo_valor; div++) {
            if ((novo_valor%div == 0) && (valor%div == 0)) {
                //if (div > mdc) {
                    mdc = div;
                //}
            }
        }
        novo_valor = mdc;
    }
    printf("%i", mdc);
}
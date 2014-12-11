#include <stdio.h>

int main() {
    int n, i, j, contador, mult, valor;
    n = i = j = contador = mult = 0; 
  
    scanf("%i ", &n);
    while (contador < (n-1)) {   
        if (n==0){
            valor = 0;
            break;
        }
        if (n==1){
            valor = 1;
            break;
        }
        if ((contador + 2) * (contador + 1) * (contador) == n){
            valor = 1;   
            break;
        }  
        else {
            valor = 2;
        }
        contador = contador + 1;
    }  
    if (valor == 1) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}

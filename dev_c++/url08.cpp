#include <cstdio>
#include <cmath>

int main(){
	int code, code2;
	int units, units2;
    float price, price2;
    scanf("%i %i %f", &code, &units, &price);
	scanf("%i %i %f", &code2, &units2, &price2); 
	printf("VALOR A PAGAR: R$ %.2f\n", (price * units) + (price2 * units2)); 

    return 0;
}




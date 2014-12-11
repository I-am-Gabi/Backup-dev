#include <stdio.h>

double calculaSerie( int n )
{
    double s;
    double cont, cont2; 
    double denominador = 1.0; 
    int variavel = 3;  
    for (cont = 1; n > 0;) {
        for (cont2 = 1; cont2 <= 2; cont2 ++) { 
            if ((int)denominador%2 == 0) {
                s *= cont/denominador;
            }
            else if((int)denominador%2 != 0) {
                s += cont/denominador;
            }
            denominador += variavel;   
            n--; 
        } 
        cont++;  
        denominador += 2;
        variavel += 4.0; 
    }
    return s;
}

double calculaPorcentagem( double s, double v )
{ 
    double result = v * s;
    return result;
}

int main () { 
	int n;
	float s, v;
	double retornS;
	double Porcentagem;
	scanf("%i", &n); //valor n da sequencia
	scanf("%f", &v); //valor sobre o qual vai ser feita a porcentagem
	retornS = calculaSerie(n); //retorno da soma da sequencia
	Porcentagem = calculaPorcentagem(retornS, v); //retorno da porcentagem
	printf("%f %f\n", (float)retornS, (float)Porcentagem);
	return 0;
}


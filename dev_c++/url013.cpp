#include <cstdio>
#include <cmath>
#include <stdlib.h>   

int main(){
	/*int a, b, c, m; 
    scanf("%i %i %i", &a, &b, &c);
    m = (a + b + abs(a-b))/2; 
    m = (m + c + abs(m-c))/2; 
	printf("%i eh o maior\n", m);*/
    
    /*int x1, y1;
    int x2, y2;
    scanf("%i %i", &x1, &y1);
    scanf("%i %i", &x2, &y2);
    printf("%.4f\n", sqrt(pow((x2- x1), 2) + pow((y2 - y1), 2)));
    */
    
    /*int distance;
    scanf("%i", &distance);
    printf("%i minutos\n", (int)(distance/0.5));
    return 0;*/

	/*float time, velocity;
	scanf("%f %f", &time, &velocity);
	printf("%.3f\n", ((time * velocity)/12.0));*/

	/*int valor;
	scanf("%i", &valor); 
	printf("%i\n", valor); 
    printf("%i nota(s) de R$ 100,00\n", valor/100);
    valor = valor % 100; 
    printf("%i nota(s) de R$ 50,00\n", valor/50);
    valor = valor % 50; 
    printf("%i nota(s) de R$ 20,00\n", valor/20);
    valor = valor % 20;    
    printf("%i nota(s) de R$ 10,00\n", valor/10);
    valor = valor % 10;
    printf("%i nota(s) de R$ 5,00\n", valor/5); 
    valor = valor % 5;
    printf("%i nota(s) de R$ 2,00\n", valor/2);
    valor = valor % 2;
    printf("%i nota(s) de R$ 1,00\n", valor/1); */
    
    int s;
    scanf("%i", &s);
    int m = s/60;
    s = s % 60;
    int h = m/60; 
    m = m % 60; 
    printf("%i:%i:%i\n", h,m,s);
    return 0;
}



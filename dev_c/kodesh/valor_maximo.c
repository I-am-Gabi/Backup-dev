#include <stdio.h>

int main() {
    float altura_metro;
    float altura_milimetro;
    float percuso, percurso2, percurso3;
    int metro, cent;
    int cont;
    scanf("%f", &altura_metro);
    altura_milimetro = altura_metro * 1000;
    percuso = altura_milimetro;
    for (cont = 1; altura_milimetro > 1; cont++) {
        altura_milimetro = (int)altura_milimetro/2;
        percuso = percuso + altura_milimetro;
    }
    percurso2 = percurso3 = percuso; 
    printf("%i \n", cont);
    printf("%f \n", percuso/2);
    metro = (percuso/1000)*2;
    cent = ((percurso2/1000)*100);
    printf("%im %fcm", metro, percurso2);
}
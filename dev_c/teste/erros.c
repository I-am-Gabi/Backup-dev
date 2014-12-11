#include <stdio.h>
#include <math.h>

int main () {
	/*int e = (0.2345 * pow(10, 3)) + (0.7 * pow(10, -1));
	float s = 234.57; 
	printf("%i %f\n", e, s);
	return 0;8*/
	 
    int n;
    scanf("%i", &n); 
    printf("Conteudo de n : %i\n", n);
	printf("Endereço de n : %p\n", &n);
                     
    /* variáveis */
    char c;
    //int i;
    //float f;
    //double d;
    /* ponteiros */
    char *pc = &c;
    //int *pi = &i;
    //float pf = &f;
    //ouble pd = &d;
    printf("%li", ((long int)(&*pc+n) - (long int)(&*pc)));
    return 0;
}


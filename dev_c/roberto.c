#include <stdio.h>

int ordem(int n){
	if (n != 0) 
		return 10 * ordem(n/10);
}

void quebra (int n, int *prim, int *ult, int *miolo) {

	unsigned int valor = n,dig,inv;
	unsigned int grandeza;


	while (valor > 0) {
		dig = valor % 10;
		valor = valor/10;
		inv = (inv*10) + dig;
	}

	*prim = inv % 10;
	*ult = n % 10;

	grandeza = ordem(n);

	*miolo = (n - (grandeza*(*prim)))/10;

}

int main () {
	int p,prim=1,ult=1,miolo=1;
	scanf ("%d", &p);
	quebra(p,&prim,&ult,&miolo);
	printf ("PRIMEIRO: %d\n", prim);
	printf ("ULTIMO: %d\n", ult);
	printf ("MIOLO: %d\n", miolo);
	return 0;
}

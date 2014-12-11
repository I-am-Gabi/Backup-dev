#include <stdio.h>

int main (fatorial, i) 
{
	if (i==0) 
	{ i = 1; }
	if (fatorial == 0)
	{ fatorial = 1;	}
	fatorial = i*fatorial;
	printf("%i\n", fatorial);
	i ++;	
	if (fatorial <= 10) {
                main(fatorial, i);
        }
}

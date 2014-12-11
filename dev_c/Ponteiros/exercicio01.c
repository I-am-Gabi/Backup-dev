#include  <stdio.h>
 
int main( void )
{
    int i = 2;
    int j = i * i; //j == 2*2 //j == 4
    int *k = &i; // *k = endereço de i
    int m = *k * *k; //m == 2 * 2// m == 4
    *k = j * *k * m; // *k = 4 * 2 * 4//32
 
    printf( "%i %i %i %i", i, j, *k, m ); // 32, 4, 32, 4
    
    return 0;
}

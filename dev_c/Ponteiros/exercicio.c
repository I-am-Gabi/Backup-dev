#include <stdio.h>

 
int main( void )
{
    int i = 0, j = 1;
    int *p = &i;
    int *q = &j;
 
    printf( "%i %i %p %p\n", i, j, &i, &j );//  0, 1, endereço i endereço j
    printf( "%p %p %p %p\n", p, q, &p, &q ); // endereço i endereço j, endereço p endereço q
    printf( "%i %i\n", *p, *q ); //0 1
    
    *p = *q;
    printf( "%i %i %p %p\n", i, j, &i, &j ); // 1, 1 || ||
    printf( "%p %p %p %p\n", p, q, &p, &q );// || || || ||
    printf( "%i %i\n", *p, *q ); // 1 1
    return 0;
}

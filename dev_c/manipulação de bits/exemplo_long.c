#include  <stdio.h>
#include  <limits.h>   /* LONG_MIN, LONG_MAX */
 
int main( void )
{
    printf( "size: %lu, min = %li, max = %li\n",
            sizeof( long ),
            LONG_MIN,
            LONG_MAX );
    return 0;
}

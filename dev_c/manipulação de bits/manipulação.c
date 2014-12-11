#include  <stdio.h> 
#include  <limits.h> 

int main( void )
{
    unsigned char byte_1 = UCHAR_MAX;   /* 255 */
    unsigned int mask32_1 = UINT_MAX;
    printf("%i \n", (int)byte_1); 
    printf("%i \n", mask32_1);  
    return 0;
}

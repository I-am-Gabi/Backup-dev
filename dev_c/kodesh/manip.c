#include <stdio.h>

unsigned char manip( unsigned char n )
{
    
}

int main () {
	unsigned char n = 69;
	unsigned char m = n;
	if ((n & ( 1 << 7)) == 0) {
		n = ~n;
		n = n >> 7;
		n = n << 7;
		n = m | n;
	}
	else {
		n = n & ~(1 << 7);
	} 

	n = n & ~(1 << 3);
	n = n & ~(1 << 2);
	n = n & ~(1 << 1);
	n = n & ~(1 << 0);
	printf("%i\n", n);
	//unsigned char m = manip(n); 
	return 0;
}

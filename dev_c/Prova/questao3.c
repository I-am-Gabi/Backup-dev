#include <stdio.h>

int main() {
	int a = 0, b = 0, c, d;
	scanf("%i", &c);
	while(b <= c)
		for (d = 0, a++, b = 0, d < a, d++, b += a);
	printf("%i\n", a-1);
		
}
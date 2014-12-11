#include <stdio.h>

int main() {
	int i, x =  1;
	int certo = 42;
	
	while (i <= 5 && x != certo)
		{
			printf(" %ia tentativa: ", i);
			scanf("%i", &x); 
			if (x < certo) {
				printf("O valor digitado é menor.\n");
			}
			if (x > certo) {
				printf("O valor digitado é maior.\n");
			}
			else {
				printf("O valor tá certo!");
				return 0;
			}
			i = i + 1;
		}
		printf("sinto muito");
		return 0;	 
}

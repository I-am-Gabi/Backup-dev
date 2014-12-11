#include <stdio.h>
	int soma_d(int n) {
		int soma;
		if (n == 0) {
			return 0;
		}
		else {
			return soma_d((n/10) + n%10); 
		}
	}
}
#include <stdio.h>
	int piso_log2(int n) { 
		if (n == 1) {
			return 0;
		}
		else {
			return 1 + piso_log2(n/2);
		}
	} 
}
#include <stdio.h>

int main (void) {
	int datas[31], *pti;
	pti = datas;
	pti = &datas[0];
	if (datas + 2 == &datas[2]) { printf("Oi 1\n");}
	if (*(datas + 2) == datas[2]) { printf("Oi 2\n");}
	return 0;
}
#include <cstdio>

int main(){
    int r;
    while (scanf("%d", &r)!= EOF) {
		double a = 3.14159 * (r*r);
		printf("A=%.4f", a);
	}
    return 0;
}

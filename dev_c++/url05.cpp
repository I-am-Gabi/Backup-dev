#include <cstdio>

int main(){
    float A, B, C, media;
    scanf("%f %f %f", &A, &B, &C);
	media = ((A*2.0) + (B*3.0) + (C*5.0))/(2.0+3.0+5.0);
	printf("MEDIA = %.1f\n", media);
    return 0;
}


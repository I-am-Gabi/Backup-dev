#include <math.h>

int poupar(float m, float I, float dep, float *RxD) {
    float montante = 0;
    float a = (1 + I);
    int meses = 1;
    while (montante <= m) {
        montante = dep * pow(a, meses);
        meses++;
    }
    *RxD = montante/(dep*meses);
    return meses;
}

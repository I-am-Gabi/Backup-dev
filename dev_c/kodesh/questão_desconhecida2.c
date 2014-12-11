#include <stdio.h>

int main() {
    int m, n;
    int x, y;
    int mx, my;
    int resul, resul2;
    mx = my = 0;
    resul2 = 0;
    resul = 0;

    scanf("%d %d", &n, &m);

    for(x = 0; x <= n; x++) 
    {
        for (y = 0; y <= m; y++)
        { 
            resul = x*y - x*x + y;
            if (resul > resul2) 
            {
                resul2 = resul;
                mx = x;
                my = y; 
            }
        }
    }
    printf("%i x=%i y=%i", resul2, mx, my);
    return 0;
}
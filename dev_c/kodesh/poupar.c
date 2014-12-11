int poupar(float m, float I, float dep, float *RxD) {
    float C = dep, t = 1, M;
    while (M <= m) { 
        M = C + (C * I * t);
        t++;
    }
    *RxD = M/(dep*t);
    return t;
}

int poupar(float m, float I, float dep, float *RxD) {
    float c = dep, t = 1, M;
    while (M <= m) { 
        M = c + (c * I * t); 
        t++;
    }
    *RxD = M/(dep*t);
    return t;
} 

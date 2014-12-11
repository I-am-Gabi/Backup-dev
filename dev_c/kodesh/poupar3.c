int poupar(float m, float I, float dep, float *RxD) {
    float total = 0;
    int meses = 1;  
    for (; total <= m; meses++) {
        total += dep * I; 
    }
    dep = dep * meses;
    *RxD = total/dep;
    return meses;
}

/*
Set0

Dado v e n inteiros sem sinal, setar o n-ésimo bit de v em 0.

unsigned int set0 (unsigned int v, int n);
Essa função deve receber dois inteiros v e n e retornar o valor inteiro após ter seu n-ésimo bit setado em 0.

A indexação da sequência de bits se dá da direita para a esquerda e começa com 0. Por exemplo: se v=7(111) || 101 e n=1 seu programa deve dar como resposta 5(101).*/
unsigned int set1 (unsigned int v, int n) {
	unsigned int um = 1 << n; 
	unsigned int dois = ~um;
}

int cruzamento(int n, int m, int i) {
    int i2 = i + 1;
    int novo;
    for(;i >= 0; i--) { 
        m = m & ~(1 << i);
    }
    for(;i2 <= 7; i2++) { 
        n = n & ~(1 << i2);
    }
    novo = m | n;
    return novo;
}

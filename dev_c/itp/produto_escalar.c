void produto_escalar (int scalar, int *x, int *y) {
    *x = *y * scalar;
    *y = *y * scalar;
}

int main(void) {
    int vetor_x1 = 10, vetor_y1 = 7;
    int *vetor_x2 = NULL, *vetor_y2 = NULL;
    produto_escalar (5, &vetor_x1, &vetor_y1);
    printf("Novo vetor = {%i, %i}\n", vetor_x1, vetor_y1);

    vetor_x2 = &vetor_x1;
    vetor_y2 = &vetor_y1;
    produto_escalar(3, vetor_x2, vetor_y2);
    printf("Novo vetor = {%i %i}\n", *vetor_x2, *vetor_y2);
    return 0;
}

#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct {
    int i;
    int *ptr;
} Registro;

int imprimir(Data data) {
	printf(" -- %i/%i/%i --\n", data.dia, data.mes, data.ano );
}

int main() {
	Data hoje;
	Data *p_data = &hoje;

	(*p_data).dia = 6;
	(*p_data).mes = 5;
	(*p_data).ano = 2013;
	printf("%i/%i/%i\n", (*p_data).dia, (*p_data).mes, p_data->ano );
	imprimir(hoje);

	Registro reg = { 10, &reg.i };
	Registro *reg_ptr = &reg;
 
	printf("%i\n", reg.i);            /* variável comum com acesso direto a um campo comum */
	printf("%i\n", *reg.ptr);         /* variável comum com acesso direto a um campo ponteiro + indireção */
	printf("%i\n", (*reg_ptr).i);     /* ponteiro com acesso indireto a um campo comum */
	printf("%i\n", reg_ptr->i);       /* ponteiro com acesso indireto a um campo comum */
	printf("%i\n", *(*reg_ptr).ptr);  /* ponteiro com acesso indireto a um campo ponteiro + indireção */
	printf("%i\n", *reg_ptr->ptr);    /* ponteiro com acesso indireto a um campo ponteiro + indireção */
}
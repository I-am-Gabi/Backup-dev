/* retorna por referência o primeiro dígito, o último e 
 * que sobra do número n depois de tirar o primeiro e o último
 * dígito (miolo) */  
#include <stdio.h>
#include <stdlib.h>
void quebra(int n, int *prim, int *ult, int *miolo)
{ 
    int ult_;
    int prim_;
    int miolo_;
    int n_ = n;
    
    int cont = 1; //contador de dígitos
    
    ult_ = n%10; //ultimo dígito do número 
    
    int n_copia = n;
    int mil = 0; 
    
    while(n_ >= 10){
        n_ = n_/10;
        cont++; //quantidade de dígitos
    }
    
    prim_ = n_;
    //printf("prim = %i \n", prim_);
    prim = &prim_;
    
    //printf("ult = %i\n", ult_);
	ult = &ult_;
	
	int ele = 1;
	while (cont > 1) {
		ele = ele * 10; 
		cont--;
	}   
	
	mil = *prim * ele;
	int sem_primeiro = n_copia - mil;
	miolo_ = sem_primeiro/10;
	//printf("miolo = %i ", miolo_);
	miolo = &miolo_;
}
 

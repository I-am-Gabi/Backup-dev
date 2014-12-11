#include <stdio.h>
#include <string.h>   
 
int main( void )
{ 
    /* variável que conta a frequencia dos caracteres */
    int cont = 0;
    
    /* declarar a variável que vai armazenar o texto */
    char str[199]; 
    /* lê o texto de 199 caracteres */
    scanf("%s", str);   
    
    /* vai andar a lista para salvar os caracteres com a mesma quantidade de repetição */
    int a = 1;
    
    /* variável que guarda momentanemente a frequencia */
    int temp = 0;
    
    int i = 0; int j = 0; 
    /* lista de caracteres com maior frequencia */
    char maior_ocorrencia[24] = { 0 };
    printf("A");
    for(; str[i] != '\0'; i += 1)
    { 
        for(; str[i] != '\0'; j += 1 ) {
            if (str[j] == str[i]) {
                cont += 1;
            }
        }
        if (cont > temp) {
            maior_ocorrencia[0] = str[i];
        }
        else if (cont == temp) {
            maior_ocorrencia[a] = str[i];
            a += 1;
        } 
    }
    
    for(i = 0; str[i] != '\0'; i += 1)
    { printf("%c ", maior_ocorrencia[i]); }
    return 0;
}

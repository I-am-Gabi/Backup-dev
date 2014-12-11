#include<stdio.h>

int my_strcmp( char *str1, char *str2){
	int i = 0;
    for(; (str2[i] != '\0' || str1[i] != '\0'); i++){
    if (str1[i] > str2[i]) return 1;
    if (str1[i] < str2[i]) return -1;
    }
    return 0;
}

int main()
{
  char cadeia1[100], cadeia2[100];

  /* Lendo as strings */
  gets(cadeia1);
  gets(cadeia2);
  /* Chamada da função */
   	printf("%i\n", my_strcmp(cadeia1, cadeia2));
  return 0;
}

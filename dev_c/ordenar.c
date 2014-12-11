#include <stdio.h>
  
int main(x, y, z)
{ 
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  int maior;
  int menor;
  int medio;
  if (x > y)   
  {                                       
	  if (y > z) {
		  /*printf("%d %d %d", x, y, z);*/
		  maior = x;
		  medio = y;
		  menor = z;
	  }      
	  else  {                                      
		if (x > z) {
			/*printf("%d %d %d", x, z, y);   */
			maior = x;
			medio = z;
			menor = y;
		}
		else {
			/*printf("%d %d %d", z, x, y);  */
			maior = z;
			medio = x;
			menor = y;
		} 
	  }
  }      
  else {                                               
	 if (y > z) {                                      
		if (x > z) {
			/*printf("%d %d %d", y, x, z);   */
			maior = y;
			medio = x;
			menor = z;
		}
		else { 
			/*printf("%d %d %d", y, z, x); */
			maior = y;
			medio = z;
			menor = x;
		}
	}      
	 else { 
		 /*printf("%d %d %d", z ,y, x); */
		 maior = z;
		 medio = y;
		 menor = x;
     }
  }          
  printf("%d %d %d", menor, medio, maior); 
  return 0;
}

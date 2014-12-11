#include <cstdio>
#include <cmath>

int main(){
	char name[200];
    float salary, value_sold;
    scanf("%s", name);
    scanf("%f %f", &salary, &value_sold);
	printf("TOTAL = R$ %.2f\n", salary + round((value_sold * 0.15)*100)/100); 

    return 0;
}




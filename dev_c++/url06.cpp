#include <cstdio>

int main(){
    int employee_number, hours;
    float amount;
    scanf("%i %i %f", &employee_number, &hours, &amount);
	printf("NUMBER = %i\n", employee_number);
	printf("SALARY = U$ %.2f\n", hours * amount);

    return 0;
}



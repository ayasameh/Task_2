#include <stdio.h>
#include <stdlib.h>

int main(){

    int gross_salary , net_salary;
    int tax_percentage = 15;
    float soicalSecurity_percentage = 6.5;
    float total_percentage = 21.5;
    puts("please , enter your gross salary :");
    scanf("%d" , &gross_salary);
    net_salary = gross_salary -(gross_salary*(total_percentage/100));
    printf("\nNet Salary equals %d\n" , net_salary );
    return 0;
}

#include<stdio.h>
void main(){
    float basic_salary,house_rent_allowance,dearness_allowance,gross_salary;
    printf("Enter basic salary: ");
    scanf("%f",&basic_salary);
    printf("%f\n",basic_salary);
    house_rent_allowance= 0.2*basic_salary;
    dearness_allowance=0.4*basic_salary;
    gross_salary=basic_salary+house_rent_allowance+dearness_allowance;
    printf("\nThe gross salary is : %.2f",gross_salary);

    
}
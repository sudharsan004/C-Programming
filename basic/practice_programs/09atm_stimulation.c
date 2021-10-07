// atm machine has 2000,100,500,50 rs notes 
// if an amount is given as input write an program to print the number of each notes the machine needs to give.
// if there is still remaining amout print it.

#include<stdio.h>
void main() 
{
int total_amount;
printf("Enter the Amount needed: ");
scanf("%d",&total_amount);
printf("\n2000rs notes : %d",total_amount/2000);
printf("\n500rs notes : %d",(total_amount%2000)/500);
printf("\n100rs notes : %d",((total_amount%2000)%500)/100);
printf("\n50rs notes : %d",(((total_amount%2000)%500)%100)/50);
printf("\nRemaining : %d",(((total_amount%2000)%500)%100)%50);





}
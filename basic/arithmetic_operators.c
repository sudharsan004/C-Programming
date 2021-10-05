#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nDifference: %d",a-b);
    printf("\nSum: %d",a+b);
    printf("\nMultiplication: %d",a*b);
    printf("\nDivision: %d",(a/b));
    printf("\nModulus: %d",(a%b));
}
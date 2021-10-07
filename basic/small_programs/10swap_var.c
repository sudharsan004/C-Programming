#include<stdio.h>
void main()
{
    int a=5,b=4,temp;
    printf("\nbefore swap: The value of a and b are %d , %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap: The value of a and b are %d , %d",a,b);

    // swap without temp variable
    // a=4, b=5
    a=a+b; //a= 9
    b=a-b; //b= 9-5 = 4
    a=a-b; //a= 9-4 = 5 

    printf("\nAfter swap without temp: The value of a and b are %d , %d",a,b);
}

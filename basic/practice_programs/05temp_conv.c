#include<stdio.h>
void main()
{
//(F− 32) × 5/9 = °C
float f,c;
printf("Enter Temprature in Fahrenheit: ");
scanf("%f",&f);

c=(f-32.0)*(5.0/9.0);
printf("%.2f Fahrenheit is equal to %.2f Celcius ",f,c);
}

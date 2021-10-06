/*
input: lenght ,breadth of rect and radius of circle in cm (eg: 3,4,5 )
output : area, perimeter of rect and area ,circumference of circle (eg: 12cm sq.,14 cm,78.5 cm sq.,31.4cm)
*/
#include<stdio.h>
int main()
{
    float l,b,r,area_rect,area_circle,peri_rect,circumference_circle;
    printf("Enter the lenght , breadth and radius :");

    // getting input from , seperated numbers
    scanf("%f%*c%f%*c%f",&l,&b,&r);

    area_rect= l*b;
    area_circle= 3.14*r*r;
    peri_rect=2*(l+b);
    circumference_circle=2*3.14*r;
    
    printf("%.2fcm sq., %.2fcm,%.2fcm sq., %.2fcm",area_rect,peri_rect,area_circle,circumference_circle);
    return 0;
}

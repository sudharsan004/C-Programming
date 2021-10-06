#include<stdio.h>
void main(){
    float km,m,ft,inch,cm;
    printf("Enter distance in km: \n");
    scanf("%f",&km);
    m=km*1e3;
    cm= km *1e5;
    inch= cm/2.54;
    ft = cm/30.48;
    printf("\n%.2f km in m is : %.2fm",km,m);
    printf("\n%.2f km in ft is : %.2fft",km,ft);
    printf("\n%.2f km in inch is : %.2finch",km,inch);
    printf("\n%.2f km in cm is : %.2fcm",km,cm);

}
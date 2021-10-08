#include <stdio.h>
int main(){
    int a=0;
    a = 5 || 2 | 1;//1
    a<<=4;//1=>0001.0000 = 10000.0 =16
    a ^=0xF;//0xF=>15 10000 ^01111 => 11111=>31
    printf("%d",a);
    return 0;
}
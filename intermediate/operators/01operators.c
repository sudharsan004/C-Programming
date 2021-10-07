/*
Arithmetic operators: +,-,*,/,%
Assignment operators: =,+=,-=,/=,*=,%=
Relational operators: 
Logical Operators:
Bitwise operators:
increment and decrement operators : ++,--
sizeof operator: sizeof()

*/
#include <stdio.h>
void main()
{
    int a = 320, c = 0;
    c += a;
    printf("\nc=%d a=%d", c, a);
    c *= a;
    printf("\nc=%d a=%d", c, a);
    c /= a;
    printf("\nc=%d a=%d", c, a);
    c -= a;
    printf("\nc=%d a=%d", c, a);
}
/*
works on binary value
& - AND ; | - OR ; ^ - XOR ; ~ - NOT ;<< - SHIFT LEFT; >> -SHIFT RIGHT;
*/

#include<stdio.h>

void main()
{
    // A=65=>1000001 3=>0000011
printf("%d",'A'|3);//or 
printf("\n%d",'A'&3);//and
printf("\n%d",'A'^3);//xor 10,01=>1 else 0
printf("\n%d",~3);//shortcut for not !x=-(x+1)
// right shift=> 100.00 =shift the . to right side =>10.0
// left shift=> 100.00 =shift the . to left side =>1000.0
int a=16,b;//16=10000

printf("\nRight shift %d",a>>2);//right shift 2 positions 16= 10000.00 =>100.00 =4
printf("\nleft shift %d",a<<2);//left shift 2 positions 10000.00 =>1000000.00 = 64

}
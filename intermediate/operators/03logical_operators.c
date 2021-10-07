// checking more than two conditions we can use logical operators example: pass mark and grades A-grade mark>=35 and mark<=50
//if true returns 1 if false returns 0

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    (marks<34 || marks==34)? printf("Fail"):'0';
    (marks>=35 && marks<50) ? printf("Grade :A"):0;
    (marks>=50 && marks<60) ? printf("Grade :A+"):0;
    (marks>=60 && marks<70) ? printf("Grade :O"):0;
    (marks>=70 && marks<100) ? printf("Grade :O+"):0;
    
    printf("%d",!5>3);
}


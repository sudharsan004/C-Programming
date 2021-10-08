// if statement
#include <stdio.h>

void main()
{

    // if
    if(1) printf("True\n");
    // if else
    int age ;
    printf("This college admits only above 15, Enter your age:");
    scanf("%d",&age);
    if (age < 15)
        printf("Age below 15, you cannot join");

    else
        printf("Age above 15, you can join\n");

    // biggest number
    int a=5,b=15,c=8;
    if (a>b && a>c){
        printf("a is big");
    }
    else if (b>c && b>a){
        printf("b is big");
    }
    else printf("c is big");

printf("\n");
    // nested if

    int mark =85;

    if (mark >=35){
        if (mark>=50)
        {
            printf("A grade");
        }
        else if (mark>=60)
        {
            printf("A + grade");
        }
        else
        {
            printf(" O grade");
        }
        
    } else printf("Fail");

}
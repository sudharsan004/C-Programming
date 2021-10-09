#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your choice: \n1.Game\n2.Cooking\n3.Writing\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You can play now\n");
        break;
    
    case 2:
        printf("You can cook now\n");
        break;
    case 3:
        printf("You can write now\n");
        break;
    
    default:
        printf("Please enter correct option");
        break;
    }
}
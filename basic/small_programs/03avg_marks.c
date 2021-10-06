#include<stdio.h>
void main(){
    char subjects[][10]={"maths","science","physics","english","tamil"};
    float marks[5],sum=0,avg;
    printf("\t\tEnter the marks for 100 in each Subject\n");
    for (int i=0;i<5;i++){
        printf("marks obtained in %s:",subjects[i]);
        scanf("%f",&marks[i]);
    }
    for (int j=0;j<5;j++){
        sum = sum + marks[j];
    }
    avg=sum/5.0;
    printf("The aggregate mark is : %0.2f and the Average Percentage is : %0.2f",sum,avg);
}

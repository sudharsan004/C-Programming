#include<stdio.h>
// i/p : 5 digit number o/p:sum of the number
int count_digits(int num){
    int count=0;
    while (num!=0){
        num=num/10;
        count++;
    }
    return count;
}
void main(){
    int number,num_copy,rem,sum=0;
    printf("Enter number");
    scanf("%d",&number);
    int count = count_digits(number);
    num_copy=number;
   
    number=num_copy;
    for (int i=0;i<count;i++){
        sum+= number%10;
        number =number /10;
    }
    printf("sum: %d",sum);
}
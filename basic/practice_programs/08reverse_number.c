#include<stdio.h>
int count_digits(int num){
    int count=0;
    while (num!=0)
    {
     num=num/10;
     count++;   
    }
    return count;
}
void main()
{
    int number,reverse=0;
    scanf("%d",&number);
    int count = count_digits(number);
    int num_digits[count];
    int iterator=0;
    for (int i=1;i<count;i++){
        int rem;
        number=number/10;
        rem= number %10;
        // num_digits[i]=rem;
        printf("%d-%d\n",rem,rem*10^(iterator));
        reverse += rem*10^(i);
        iterator++;
    }
    printf("%d\n",count);
    printf("%d",reverse);
    
}
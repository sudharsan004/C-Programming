#include<stdio.h>
#include<limits.h>
void main(){
    /* 
    INT
    short int %hd
    unsigned short int %hu
    unsigned int %u
    int %d
    long int %ld
    unsigned long int %lu
    long long int %lld
    unsigned long long int %llu
    */

   /*
   char %c
   */
  /*
  float %f
  double %lf
  */
    printf("int size: %u  limit-> %d to %d", sizeof(int),INT_MIN,INT_MAX);
    printf("\nshort int size: %u limit-> %d to %d",sizeof(short int),SHRT_MIN,SHRT_MAX);


}

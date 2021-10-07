#include<stdio.h>
void main(){
char name[100];
printf("Enter your name:");
scanf("%s",&name);
int count;
for(count=0;name[count]!='\0';++count);
//printf("%d",count);
for (int i=0;i<count; i++){
    for (int j=0;j<count; j++){
            if(i==j){
                printf("%c",name[i]);
            }
            else if(j==count-i-1){
                printf("%c",name[count-1-i]);
            }
            else{
                printf(" ");
            }

    }
    printf("\n");
}


}

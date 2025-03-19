#include<stdio.h>


int main(){
    int a=1,b,sum;
    printf("enter the no: ");
    scanf("%d",&b);

    demo:
    if(a<=10){
       sum=a*b;
       printf("%d ",sum);//sum its another way to print table
       a++;
    goto demo;
    }
  
}


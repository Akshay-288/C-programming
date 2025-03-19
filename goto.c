#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=1,b;
    printf("enter the no");
    scanf("%d",&b);

    demo:
    
    if(a<=b){
        printf("%d ",a);
     a++;

    goto demo;
    }
  
}

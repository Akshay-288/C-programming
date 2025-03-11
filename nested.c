#include<stdio.h>
int main(){
    int x;
    printf("enter the age");
    scanf("%d",&x);
    if(x>0){
        if(x>=18){
            printf("eligiable to vote");
        }else{
            printf("not eligible to vote");
        }

    }else{
        printf("enter a valid age num");
    }



}
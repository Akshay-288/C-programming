#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0){
        if(a%2==0){
            printf("Number is even");
        }else{
            printf("Number is odd");
        }
    }else{
        printf("Enter valid number");
    }
}
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%D%D",&a,&b,&c);
    if(a>b&&a>c){
        printf("A is max: %d",a);
    }
    else if(b>a&&b>c){
        printf("B is max: %d",b);
    }
    else if(c>a&&c>b){
        printf("C is max: %d",c);
    }
}
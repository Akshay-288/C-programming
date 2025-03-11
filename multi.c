#include<stdio.h>
int main(){
    int a=1,b=1,n;
    printf("enter value");
    scanf("%d",&n);

    while(a<=n)
    {
        b=1;
        while(b<=10){
            printf("%d  ",a*b);
            b++;
        
        }
        printf("\n");
        a++;
    }
   
}
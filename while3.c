#include<stdio.h>
int main(){
    int a=1,n;
    printf("enter number");
    scanf("%d",&n);

     while(a>=n){
        printf("%d\n",n);
        a++;
     }
}
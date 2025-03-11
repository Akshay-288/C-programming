#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter number ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        f*= i;
    }
   printf("factorial of %d is %d\n",n,f);
}

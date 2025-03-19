#include<stdio.h>

void demo(int n,int a, int fact)
{
    if(a>n){
        printf("\nfactorial is :%d\n",fact);
        return;
    }
    fact*=a;
    a++;
    demo(n,a,fact);
}
int main()
{
    int n,a=1,fact=1;
    printf("enter the no: ");
    scanf("%d",&n);
    demo(n,a,fact);
    printf("main end");
    return 0;
}
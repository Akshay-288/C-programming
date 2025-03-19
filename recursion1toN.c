#include<stdio.h>

void demo(int n,int a, int sum)
{
    if(a>n){
        printf("\nSum of 1 to N Numbers:%d\n",sum);
        return;
    }
    printf("%d ",a);
    sum+=a;
    a++;
    demo(n,a,sum);
}
int main(){
    int n,a=1,sum=0;
    printf("enter the no: ");
    scanf("%d",&n);
    demo(n,a,sum);
    printf("main end");
    return 0;
}
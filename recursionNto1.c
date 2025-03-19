#include<stdio.h>


void demo(int n,int a, int sum){

    printf("%d ",n);
    sum+=n;
    if(n<=a){ 
        printf("\nSum of N to 1 Numbers:%d\n",sum);
        return;
    }
    n--;
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
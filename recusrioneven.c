#include<stdio.h>


void demo(int a, int b,int sum)
{
    if(a%2==0){
        printf("%d ",a);
        sum+=a;
    }
    
    if(a>b){
        printf("\nSum of even num:%d\n",sum);
        return;
    }
        a++;
        demo(a,b,sum);
}
int main()
{
    int a=1,b,sum=0;
    printf("enter the value: ");
    scanf("%d",&b);
    demo(a,b,sum);
    printf("main end");
    return 0;
}
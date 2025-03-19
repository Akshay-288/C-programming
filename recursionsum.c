#include<stdio.h>

void demo(int a, int b, int sum)
{
    
    if(a>b){
        printf("\nsum of 1 to N numbers is: %d\n",sum); //print the sum when the recursion ends
     return;
    }
    printf("%d ",a);
    sum+=a;//sum
    a++;
    demo(a,b,sum);

}
int main()
{
    int a=1,b,sum=0;
    printf("enter number: ");
    scanf("%d",&b);
    demo(a,b,sum);
    printf("main end");
    return 0;
}
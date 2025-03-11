#include<stdio.h>
int main()
{
    int a=10;
    int b=5;
    printf("before swaping a: %d\n",a);//10
    printf("before swaping b: %d\n",b);//5
    a=a*b;//50
    b=a/b;//10
    a=a/10;//
    
    printf("after swaping a: %d\n",a);
    printf("after swaping b: %d\n",b);
}
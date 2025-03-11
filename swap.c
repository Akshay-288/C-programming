#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("before swaping a: %d\n",a);//10
    printf("before swaping b: %d\n",b);//20
    a=a+b;//30
    b=a-b;//10
    a=a-b;//20
    printf("before swaping a: %d\n",a);
    printf("before swaping b: %d\n",b);
}
#include<stdio.h>
// #include<stdlib.h>
int main()
{
    int a=1,b;
    printf("enter the no: ");
    scanf("%d",&b);

    demo:
    if(b>=a){
        printf("%d ",b);
     b--;

    goto demo;
    }
}


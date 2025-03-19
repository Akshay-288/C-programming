#include<stdio.h>
#include<stdlib.h>

void demo(int n)
{

    printf("demo ");
    if(n==10){ 
        return;
    }
    n++;
    demo(n);
}
int main()
{
    int n=1;
    printf("main ");
    demo(n);
    printf("main end");
    return 0;
}
#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num%2==0){
        printf("Is even");
    }
    else
    {
        printf("Is odd");
    }
}
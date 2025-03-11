//sum of 1 to N
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number:-");
    scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
        sum=a+sum;  
    }
    printf("%d",sum);
}

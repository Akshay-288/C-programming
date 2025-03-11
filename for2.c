//print table
#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter number:-");
    scanf("%d",&n);

    for(int a=1;a<=10;a++){
        sum=a*n;
      
        printf("%d ",sum);
    }
}
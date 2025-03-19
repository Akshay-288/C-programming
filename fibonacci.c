#include<stdio.h>
int main(){
    int n;
    printf("Enter the end point: ");
    scanf("%d",&n);
    int a=3,first=0,second=1,third=first+second;
    printf("%d %d ",first,second);
    while(a<=n){
        printf("%d ",third);
        first=second;
        second=third;
        third=second+first;
        a++;
    }
}
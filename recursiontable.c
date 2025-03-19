#include<stdio.h>


void demo(int a, int b){
    int sum;
    sum=a*b;
    printf("%d ",sum); //sum its another way to print table
    if(a==10){
        return;
    }  
        a++;
        demo(a,b);
   
}
int main(){
    int a=1,b;
    printf("enter the no: ");
    scanf("%d",&b);
    demo(a,b);
    printf("main end");
    return 0;
}
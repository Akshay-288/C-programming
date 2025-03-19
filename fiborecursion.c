#include<stdio.h>


void fibonacci(int first, int second, int third, int n){
    
    
    printf("%d ",first);
    if(n==1){
        return;
    }
    fibonacci(second,third,third+second,--n);   
   
}
int main(){
    int n=6;
    int a=0,b=1,c=a+b;
    fibonacci(a,b,c,n);
    printf("main end");
    return 0;
}
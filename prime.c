#include<stdio.h>
int main(){
    int a=2,num=4, count=0;
    while(a<=num/2){
        if(num%a==0){
            count++;
        }
        a++;

    }
    if(count==0){
        printf("it is a prime number");
    }else{
        printf("it a not prime number");
        
    }
}

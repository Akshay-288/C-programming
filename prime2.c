#include<stdio.h>
int main(){
    int a,num=2, count;

    while(num<=100){
        a=2;
        count=0;
        
        while(a<=num/2){
            if(num%a==0){
                count++;
            }
            a++;
        }
        if(count==0){
            printf("%d  ",num);
        }
        num++;
    }
        
}
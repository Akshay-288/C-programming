#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            
            printf("*");   
        }
        printf("\n");
    }
    for(int i=5;i>=1;i--){
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            
            printf("*");   
        }
        printf("\n");
    }
}
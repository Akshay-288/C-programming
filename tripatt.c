//triangle pattern
#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}
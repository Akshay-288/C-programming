#include<stdio.h>
int main(){
    int age;

    printf("enter age=",age);
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligibale to vote");
    }
    else{
        printf("You are not eligiable to vote");
    }
    
}
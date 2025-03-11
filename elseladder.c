#include<stdio.h>
int main(){
    //else if ladder -- to check more than one condition
    //program for enter the name and mark of student and print gardes
    char name[10];
    int marks;
    printf("enter your name:");
    scanf("%s",name);
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>90){
        printf("name: %s \n grade:'A'  \n",name);
    }
    else if(marks>70){
        printf("name: %s \n grade:'B'  \n",name);
    }
    else if(marks>35){
        printf("name: %s \n grade:'C'  \n",name);
    }
    else{
        printf("name: %s \n 'Fail'  \n",name);
    }

}
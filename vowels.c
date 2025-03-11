#include<stdio.h>
int main(){
    char t;
    printf("enter any character:");
    scanf("%c",&t);
    if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u'){
        printf("The enter chacter is vowel: %c",t);
    }
    else{
        printf("The enter chacter is not a vowel: %c",t);
    }
}
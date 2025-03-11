#include<stdio.h>
int main(){
    int number,rev=0,digit,numdigit;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i=0; i<numdigit; i++){
        digit = number%10;
        rev = rev * 10+digit;
        number = number/10

    }
    printf("Reversed number: %d\n", rev);
    
}
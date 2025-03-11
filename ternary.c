
// Online C program to find max number between three nos.
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    

   printf("enter number a=",a);
   scanf("%d",&a);
   printf("enter number b=",b);
   scanf("%d",&b);
   printf("enter number b=",c);
   scanf("%d",&c);
   printf("max num is :%d",a>b&&a>c?a:(b>c?b:c));
}

// Online C program to find max nom between 5 nos
#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    

   printf("enter number a=",a);
   scanf("%d",&a);
   printf("enter number b=",b);
   scanf("%d",&b);
   printf("enter number c=",c);
   scanf("%d",&c);
    printf("enter number d=",d);
   scanf("%d",&d);
    printf("enter number e=",e);
   scanf("%d",&e);
   printf("max num is :%d",(a>b&&a>c&&a>d&&a>e)?a:(b>c&&b>d&&b>e)?b:(c>d&&c>e)?c:(d>e)?d:e);
}
#include<stdio.h>
#include<stdlib.h>
int add(int a, int b){
    return(a+b);
}
int sub(int a, int b){
    return(a-b);
}
int multi(int a, int b){
    return(a*b);
}
int division(int a, int b){
    return(a/b);
}
int main()
{
    int n1,n2,choice;

    while(1)
 {
     printf("\nenter a two numbers:");
     scanf("%d%d",&n1,&n2);
     printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.exit \nenter the choice :\n ");
     scanf("%d",&choice);
    
    switch (choice)
    {
    case 1: printf("Addition : %d",add(n1,n2));
        break;
    case 2: printf("Subtraction : %d:",sub(n1,n2));
        break;   
    case 3: printf("Multiplication : %d",multi(n1,n2));
        break;
    case 4: printf("Division : %d",division(n1,n2));
        break;
    case 5: exit(0);
    default:
        printf("invalid choice ");
        break;
    }
 }
    return 0;
}

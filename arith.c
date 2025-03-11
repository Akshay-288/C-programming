#include<stdio.h>
#include<stdlib.h>

void add()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Addition is: %d",(a+b));
}
void sub()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("subtracttion is: %d",(a-b));
}
void multi()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("multiplication is: %d",(a*b));
}
void division()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("division is: %d",(a/b));
}

int main(){

    int ch;

    while(1){

        printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.exit\n ");
        printf("enter the choice: ");
        scanf("%d",&ch);
        if (ch==5)      
            exit(0);

        switch (ch)
        {
        case 1:add(); 
        break;
        case 2:sub(); 
        break;
        case 3:multi(); 
        break;
        case 4:division(); 
        break;
        default:
            break;
        }
    }
    
}
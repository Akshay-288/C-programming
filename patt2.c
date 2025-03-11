//hollow sqaure
#include<stdio.h>
int main()
{
    for(int a=1;a<=4;a++)
    {
        for(int b=1;b<=4;b++)
        {
            if(a==1||a==4||b==1||b==4)
            {
            printf("* ");
            }else
            {
                printf("  ");
            } 
        } 
        printf("\n");
    }
}
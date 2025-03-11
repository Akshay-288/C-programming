#include<stdio.h>
int main()
{
    int roll;
    char name[10];
    int s1,s2,s3,s4,s5;
    float marks;
    float per;
    char Grade;

    printf("enter roll no:",roll);
    scanf("%d",&roll);
    printf("enter name of student:",name);
    scanf("%s",name);
    printf("enter marks of 5 subject:\n",s1,s2,s3,s4,s5);
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    marks=s1+s2+s3+s4+s5;
    per=(marks/500)*100;
   
    if(per>90){
        Grade='A';
    }else if(per>70){
        Grade='B';
    }else if(per>35){
        Grade='C';
    }else{
        Grade='F';
    }
    printf("\n\t|\t------------------Marksheet-----------------------");
    printf("\n\t|\t Name :  \t|\t %s",name);
    printf("\n\t|\t roll Number: \t|\t %d",roll);
    printf("\n\t|\t percentage:  \t|\t %f",per);
    printf("\n\t|\t Garde:  \t|\t %c",Grade);

    printf("\n\t|\t--------------------------------------------------");
}
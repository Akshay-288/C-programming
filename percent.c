#include<stdio.h>
int main(){
    int roll;
    char name[10];
    int s1,s2,s3,s4,s5;
    float marks;
    float per;

    printf("enter roll no:",roll);
    scanf("%d",&roll);
    printf("enter name of student:",name);
    scanf("%s",name);
    printf("enter marks of 5 subject:\n",s1,s2,s3,s4,s5);
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    marks=s1+s2+s3+s4+s5;
    per=(marks/500)*100;
    printf("\n\n Marklist\n\n");
    if(per>90){
        printf("roll: %d \n name: %s \n per: %f \n grade:'A'  \n",roll,name,per);
    }else if(per>70){
        printf("roll: %d \n name: %s \n per: %f \n grade:'B'  \n",roll,name,per);
    }else if(per>35){
        printf("roll: %d \n name: %s \n per: %f \n grade:'C'  \n",roll,name,per);
    }else{
        printf("roll: %d \n name: %s \n per: %f \n grade:'Fail'  \n",roll,name,per);
    }
}
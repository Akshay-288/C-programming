//switch cases(choice)
#include<stdio.h>
int main(){
  int num1,num2,choice;
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d",&num2);
  printf("Enter your choice:\n 1.addition \n 2.substraction \n 3.multiplication \n 4.division \n ");
  scanf("%d",&choice);
  switch (choice){
      case 1:printf("Addition is: %d",num1+num2);break;
      case 2:printf("Subtraction is: %d",num1-num2);break;
      case 3:printf("Multiplication is: %d",num1*num2);break;
      case 4:printf("Division is: %f",((float)num1/num2));break;
      default:printf("invalid choice");
  }
}

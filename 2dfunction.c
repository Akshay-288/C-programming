#include<stdio.h>
#include<stdlib.h>

void addition(int arr1[3][3],int arr2[3][3]){
    int sum[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printf("Addition of 2 arrays\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",sum[i][j]);
        }
        
        printf("\n");
    }
    
}
void subtraction(int arr1[3][3],int arr2[3][3]){
    int sub[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sub[i][j] = arr1[i][j]-arr2[i][j];
        }
    }
    printf("Subtraction of 2 arrays\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    
}
void multiplication(int arr1[3][3],int arr2[3][3]){
    int mul[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          for(int k=0;k<3;k++)
          {
            mul[i][j]+=arr1[i][k]*arr2[k][j];//mul=mul+arr1*arr2
          }
        }
        
    }
    printf("multiplication of 2 arrays\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);// to iterate to mul[i][j] array and print the store values in mul array
        }
        printf("\n");
    }
}
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int ch;
    
    
    printf("enter the array values of array1:  ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter the array values of array2: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr2[i][j]);
        }
    }
    // addition(arr1,arr2);
    // subtraction(arr1,arr2);
    // multiplication(arr1,arr2);
    printf("Enter your choice:\n 1.addition \n 2.substraction \n 3.multiplication \n ");
    printf("Enter the choice");
    scanf("%d",&ch);
  switch (ch)
  {
      case 1:
      addition(arr1,arr2);
      break;
      case 2:
      subtraction(arr1,arr2);
      break;
      case 3:
      multiplication(arr1,arr2);
      break;
      default:printf("invalid choice");
  }
}

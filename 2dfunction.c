#include<stdio.h>
#include<stdlib.h>

void printarr(int arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
}

void addition(int arr1[3][3],int arr2[3][3])
{
    int sum[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    printarr(sum);
}
void subtraction(int arr1[3][3],int arr2[3][3])
{
    int sub[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sub[i][j] = arr1[i][j]-arr2[i][j];
        }
    }
    printarr(sub); 
}

void multiplication(int arr1[3][3],int arr2[3][3])
{
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
    printarr(mul);
}
void transpose(int arr1[3][3])
{
    int trans[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            trans[j][i]=arr1[i][j];
        }
       }
       printarr(trans);
}


int main(){
    int arr1[3][3];
    int arr2[3][3];

    int ch;
    while(1)
    {
    printf("Enter your choice:\n 1.addition \n 2.substraction \n 3.multiplication \n 4.Transpose \n ");
    printf("Enter the choice: ");
    scanf("%d",&ch);
    if(ch==4){
        printf("enter the array values of array1:  ");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               scanf("%d",&arr1[i][j]);
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
        printf("The transpose of array is:- \n");
    }else if(ch>4){
        printf("Entered choice is wrong plzz enter a the right choice\n");
    }
    else{
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
    }
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
      case 4:
      transpose(arr1);
      break;
      
   } 
 }
}

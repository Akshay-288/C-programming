#include<stdio.h>
#include<stdlib.h>

void printarr(int arr[3][3])//function for printing the output
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
}

void addition(int arr1[3][3],int arr2[3][3])//function for addition
{
    int sum[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sum[i][j] = arr1[i][j]+arr2[i][j];//addition of 2 array
        }
    }
    printarr(sum);
}
void subtraction(int arr1[3][3],int arr2[3][3])//function for subtraction
{
    int sub[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            sub[i][j] = arr1[i][j]-arr2[i][j];//subtraction of 2 array
        }
    }
    printarr(sub); 
}

void multiplication(int arr1[3][3],int arr2[3][3])//function for multi
{
    int mul[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          for(int k=0;k<3;k++)
          {
            mul[i][j]+=arr1[i][k]*arr2[k][j];//mul=mul+arr1*arr2 //it multiply the arr1 with arr2 and stores values in mul[i][j]
          }
        } 
    }
    printarr(mul);
}
void transpose(int arr1[3][3])//function for transpose the arr1 means it convert arr1 rows in column in trans[i][j]
{
    int trans[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            trans[j][i]=arr1[i][j];//it tranpose the array 1 and stores in trans[i][j]
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
    printf(" Your choice:\n 1.addition \n 2.substraction \n 3.multiplication \n 4.Transpose \n 5.exit \n ");
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
         
    }else if(ch>=5){
        printf("Entered choice is wrong plzz enter a the right choice\n");
        //    exit(0);
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
    //   case 5:exit(0);
    //   default:
    //   printf("invalid choice");
    //   break;
   } 
 }
 return 0;
}

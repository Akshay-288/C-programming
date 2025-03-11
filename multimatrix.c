#include<stdio.h>
int main()
{

    int arr1[3][3];
    int arr2[3][3];
    int mul[3][3];

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
    //to store null or 0 in mul[i][j]
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          mul[i][j]=0;//mul[i][j] this array is stores 0
        }
    }
    //to multiply the two arrays
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
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);// to iterate to mul[i][j] array and print the store values in mul array
        }
        printf("\n");
    }
    
    
}
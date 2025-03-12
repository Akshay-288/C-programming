#include<stdio.h>
int main(){
    int arr1[2][3];
    int arr2[3][2];
    int mul[2][3];
      
    printf("enter the values in array1: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("enter the values in array2: ");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          mul[i][j]=0;//mul[i][j] this array is stores 0
        }
    }
    
    
}
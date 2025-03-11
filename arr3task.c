#include<stdio.h>
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int sub[3][3];

    printf("enter the array values of array1:  ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }

    printf("enter the array values of array2: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
    printf("addition  of arr1 and arr2 is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sub[i][j] = arr1[i][j]-arr2[i][j];
            printf("%d ",sub[i][j]);
        }
        printf("\n");

    }
    printf("\n");
}
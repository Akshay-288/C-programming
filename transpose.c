#include<stdio.h>
int main(){
    int arr1[3][3];
  int trans[3][3];
    printf("enter values of array 1: ");
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
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        trans[i][j]=0;
    }
   }
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        trans[j][i]=arr1[i][j];
    }
   }
   printf("the values of transpose array:\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",trans[i][j]);
    }
    printf("\n");
   }

}
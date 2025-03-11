#include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n Elements in array are:\n");
    for(i=0;i<5;i++){
        printf("%5d",arr[i]);
    }
    printf("\n Elements in reverse order are:\n");
    for(i=4;i>=0;i--){
        printf("%5d",arr[i]);
    }
}
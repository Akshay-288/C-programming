#include<stdio.h>
int main(){
    int arr[5];

    int i;
    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max no is: %d",max);
}

  
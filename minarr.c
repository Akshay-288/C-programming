#include<stdio.h>
int main(){
    int arr[5];
    int x;
    int i;
    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("min no is: %d",min);
}

//sum of even nos?
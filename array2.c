#include<stdio.h>
int main(){
    int arr[5],search;
    int x;
    int i;
    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Enter element to search in array:\n");
    scanf("%d",&search);
    for(i=0;i<5;i++){
        if(arr[i]==search){
            x=1;
            break;
        }
    }
    if(x==1){
        printf("given number is found");
    }
    else{
        printf("given number is not found");
    }
}

  
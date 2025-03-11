#include<stdio.h>
int main(){
    int n;
    printf("enter length");
    scanf("%d",&n);//6

    int arr[n];
    printf("Enter any five numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("values from array:\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}
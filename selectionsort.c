#include<stdio.h>
int main(){
    int arr[]={3,4,5,1,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int minind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minind]){
                minind=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minind];
        arr[minind]=temp;

    }
        
    printf("values from array\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}
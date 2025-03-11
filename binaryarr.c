#include<stdio.h>
int main()
{
    int arr[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter key : ");
    scanf("%d",&key);
    int left=0,right=4;

    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==key){
            printf("Element is present at index %d\n",mid);
            break;
        }
        if(arr[mid]>key){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
        
    }
    return 0;
}
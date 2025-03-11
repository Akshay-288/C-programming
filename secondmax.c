#include<stdio.h>
int main(){
    int arr[5];
    int i;
     int max1,max2;
     max1=max2=0;

    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    //int temp=arr[i];
    //int max1=arr[0];
    for(i=0;i<5;i++)
    {
    if (arr[i] > max1)
      {
        max2 = max1;
        max1 = arr[i];
      } 
       if (max1 > max2 && arr[i]<= max2)
      {
        max2 = arr[i];
      }
    }
    printf("Max number is: %d\n",max1);
    printf("Second max number is: %d\n",max2);
}
  
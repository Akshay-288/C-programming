#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    printf("Enter any five numbers:");
    for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
    }
    int a,count;
    for(i=0;i<10;i++)
    {
        a=2;
        count=0;
      while(a<=arr[i]/2)
     {
        if(arr[i]%a==0){
            count++;
        }
        a++;

     }if(count==0)
     {
        printf("it is a prime number %d\n ",arr[i]);
     }else
       {
        printf("it a not prime number %d\n ",arr[i]);
        
      }
    }
    
    
}
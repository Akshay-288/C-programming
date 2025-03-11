#include<stdio.h>
int main(){
    int arr[5],sum=0;
    int i;
    printf("Enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("even num: %d\n",arr[i]);
            sum+=arr[i];
            
            
         }else{
            printf("odd num: %d\n",arr[i]);

         }
         

    }
    printf("sum of even : %d\n",sum);

}

//sum of even nos?
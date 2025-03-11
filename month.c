#include<stdio.h>
int main(){
    int month;
    printf("Enter a number between 1 and 12 to get the month & day: ");
    scanf("%d",&month);
  switch(month){
    case 1:  // January
    case 3:  // March
    case 5:  // May
    case 7:  // July
    case 8:  // August
    case 10: // October
    case 12: // December
        printf("31 days\n");break;
    case 11: // November
    case 4:  // April
    case 6:  // June
    case 9:  // September
        printf("30 days\n");break;
    case 2:  // February
        printf("28 days\n");break;
    default:printf("Invalid enter a number between 1 and 12");      
        
  }
  return 0;
}
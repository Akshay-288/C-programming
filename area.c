#include<stdio.h>
#include<stdlib.h>

void circle(){
    float area,r;
    float pi=3.14;
    printf("enter radius of circle: ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("area of circle: %f",area);
}
void square(){
    float area,side;
    printf("enter side square: ");
    scanf("%f",&side);
    area=side*side;
    printf("area of square %f",area); 
}
void cylinder(){
    float area,h,r;
    float pi=3.14;
    printf("enter radius of cylinder: ");
    scanf("%f",&r);
    printf("enter height of cylinder: ");
    scanf("%f",&h);
    area=2*pi*r*(r+h);
    printf("area of cylinder %f",area); 
}
void sphere(){
    float r,area;
    float pi=3.14;
    printf("enter the radius: ");
    scanf("%f",&r);  
    area=4*pi*r*r;
    printf("area of sphere %.2f",area);

}
int main()
{
    int ch;

    while(1)
   {
     printf("\n1.Area of circle \n2.area of square \n3.area of cylinder \n4.area of sphere \n5.exit\n");
     printf("enter the choice: ");
     scanf("%d",&ch);
     if (ch==5)      
            exit(0);

        switch (ch)
        {
        case 1:circle(); 
        break;
        case 2:square(); 
        break;
        case 3:cylinder(); 
        break;
        case 4:sphere(); 
        break;
        default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    }
    return 0;
}

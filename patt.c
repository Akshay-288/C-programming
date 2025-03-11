//simple * * * * pattern
/*#include<stdio.h>
int main(){
    for(int a=1;a<=4;a++){
        for(int b=1;b<=4;b++){
            printf("* ");
        }
        printf("\n");
    }
}*/
// * pattern
// #include<stdio.h>
// int main(){
//     for(int a=1;a<=4;a++){
//         for(int b=1;b<=a;b++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

//reverse *
#include<stdio.h>
int main(){
    for(int a=4; a>=1; a--){
    for(int b=1; b<=a; b++){
            printf("* ");
        }
        printf("\n");
    }
}

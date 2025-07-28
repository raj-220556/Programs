#include<stdio.h>
void main(){
    int a;
    printf("Enter user age for vote :");
    scanf("%d",&a);
    if (a>=18){
        printf("your  are eliglibe for voting");
        printf("\n Follow the steps for voting \n register for vote in gov.com site");
    }
    else
    printf("your are not eligible for voting");

}
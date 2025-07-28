// 
#include<stdio.h>
void main(){
    //  6.a.swapping without variable
    int num1,num2;
    printf("enter value of number 1:");
    scanf("%d",&num1);
    printf("enter value of number 2:");
    scanf("%d",&num2);
    // swappig without variable
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    // after swapping
    printf("after swaping :\n");
    printf("num1:%d\nnum2:%d\n",num1,num2);

}
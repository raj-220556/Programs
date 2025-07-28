#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the num1 :");
    scanf("%d",&a);
    printf("enter the num2 :");
    scanf("%d",&b);
    printf(" num1=%d \n num2=%d",a,b);
    //with third variable
    c=b;
    b=a;
    a=c;
    printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
    //without third varible 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
    //swapping by using *,/
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
    //swaping by using XOR ^
    a=a^b;
    b=a^b;
    a=a^b;



}
#include<stdio.h>
void main(){
// 6.b.check palindrome or not 
    int num,rev,digit;
    printf("enter any number :");
    scanf("%d",&num);
    int num2=num;
    rev=0;
    while(num!=0){
        digit =num%10;
        rev=rev*10+digit;
        num =num/10;
    
    }
    if(num2==rev){
        printf("given number is palindrome \n");

    }
    else
        printf("given number is not a palindrome");
}
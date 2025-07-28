#include <stdio.h>
//Integers +ve or -ve
void main(){
    int a;
    printf("enter the number to check :");
    scanf("%d",&a);
    if(a>0)
        printf("%d is a positive number ",a);
    else if(a<0)
        printf("%d is a negative number ",a);
    else 
        printf("It is a zero");
}
#include <stdio.h>
//logical operators
int main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("\n operation as %d<=%d:%d",a,b,a<=b);
    printf("\n operation as %d>=%d:%d",a,b,a>=b);
    printf("\n operation as %d!=%d:%d",a,b,a!=b);
    printf("\n operation as %d==%d:%d",a,b,a==b);
    printf("\n operation as %d&&%d:%d",a,b,a&&b);
    printf("\n operation as %d||%d:%d",a,b,a||b);
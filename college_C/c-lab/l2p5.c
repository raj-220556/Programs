//bitwise operators
#include <stdio.h>
int main(){
    int a,b;
    printf("enter a value of a:");
    scanf("%d",&a);
    printf("enter a value of b:");
    scanf("%d",&b);
    printf("& operation between %d and %d is %d",a,b,a&b);
    printf("! operation between %d  is %d",b,!b);
    printf("<< operation between %d and %d is %d",a,b,a<<b);
    printf(">> operation between %d and %d is %d",a,b,a>>b);
    printf("^peration between %d and %d is %d",a,b,a^b);
}

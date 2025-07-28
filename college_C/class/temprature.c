#include <stdio.h>
int main(){
    float a,c,f;    float a,c,f;

    printf("What do you want? ");
    printf("\n enter 1 for  celsius to fahrenheit...");
    printf("\n enter 2 for  fahrenheit to celsius ...");
    printf("\n input :");
    scanf("%f",&a);
    if (a==1){
        printf("Enter the celsius :");
        scanf("%f",&c);
        float cf=((c*(9.0/5))+32);
        printf("fahrenheit for %f c is %f f",c,cf);

    }
    else if (a==2){
        printf("Enter the fahrenheit :");
        scanf("%f",&f);
        float fc=(f-32)*5/9;
        printf("celsius for %f f is %f c",f,fc);

    }
}
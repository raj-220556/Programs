#include<stdio.h>
void main(){
    int a,b;
    char o;
    printf("enter the 1st digit to operation : ");
    scanf("%d",&a);
    printf("enter the 2nd digit to operation : ");
    scanf("%d",&b);
    printf("enter the operation betwen numbers (+,-,*,/,%%) : ");
    scanf(" %c",&o); //give space before %c due to give for %% printing
    // printf("\naddition between %d and %d is %d",a,b,a+b);
    // printf("\nsubraction between %d and %d is %d",a,b,a-b);
    // printf("\nmultipilication between %d and %d is %d",a,b,a*b);
    // printf("\ndivision between %d and %d is %d",a,b,a/b);
    // printf("\nmodular division between %d and %d is %d",a,b,a%b);
    
    // //using else if laddeer
    // if (o=='+')
    // printf("\naddition between %d and %d is %d",a,b,a+b);
    // else if (o=='-')
    // printf("\nsubraction between %d and %d is %d",a,b,a-b);
    // else if(o=='*')
    // printf("\nmultipilication between %d and %d is %d",a,b,a*b);
    // else if(o=='/')
    // printf("\ndivision between %d and %d is %d",a,b,a/b);
    // else if(o=='%')
    // printf("\nmodular division between %d and %d is %d",a,b,a%b);

//using switch case
    switch(o){
    case '+':
    printf("\naddition between %d and %d is %d",a,b,a+b);
    break;
    case '-':
    printf("\nsubraction between %d and %d is %d",a,b,a-b); 
    break;
    case '*':
    printf("\nmultipilication between %d and %d is %d",a,b,a*b);
    break;
    case '/':
    printf("\ndivision between %d and %d is %d",a,b,a/b);
    break;
    case '%':
    printf("\nmodular division between %d and %d is %d",a,b,a%b);
    break;
    default: 
    printf("enter a valid operation");
    break;
    }



}
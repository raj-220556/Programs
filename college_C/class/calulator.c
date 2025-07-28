#include<stdio.h>
int main()
{
    int a,b,cond;
    char o;
    cond=1;
    while(cond==1){
        printf("enter the 1st digit to operation : ");
        scanf("%d",&a);
        printf("enter the 2nd digit to operation : ");
        scanf("%d",&b);
        printf("enter the operation betwen numbers (+,-,*,/,%%) : ");
        scanf(" %c",&o); //give space before %c due to give for %% printing
        if (o=='+')
        printf("%d+%d=%d\n",a,b,a+b);
        else if (o=='-')
        printf("%d-%d=%d\n",a,b,a-b);
        else if(o=='*')
        printf("%d*%d=%d\n",a,b,a*b);
        else if(o=='/')
        printf("%d/%d=%d",a,b,a/b);
        else if(o=='%')
        printf("%d%%%d=%d",a,b,a%b);
        
     printf("\ndo you wish to continue ?");
     printf("\nprees 1 for continue ?");
     printf("\nprees 0 for exit ?");
     scanf("%d",&cond);
        
    } 
    printf("Thanks for using our caluculator..");
}
    

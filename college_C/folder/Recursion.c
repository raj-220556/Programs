#include<stdio.h>
#include<math.h>
void printAsc(int n)
{
	if(n==0)
	{
		return;
	}
	printAsc(n-1);
	printf("%d",n);
}
void printDesc(int n)
{
	if(n==0)
	{
		return;
	}
	printf("%d",n);
	printDesc(n-1);
}
int powe(int x,int y)
{
	if(y==0){
		return;
	}
	return pow(x,y);
}
int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return GCD(b,a%b);
}
int main()
{
	int N;
	printf("Enter the value of N :");
	scanf("%d",&N);
	printf("Number from 1 to %d :",N);
	printAsc(N);
	printf("\n");
	printf("Numbers from %d to 1 :",N);
	printDesc(N);
	printf("\n");
	int x,y,result;
	printf("Enter the base X :");
	scanf("%d",&x);
	printf("Enter the power y :");
	scanf("%d",&y);
	result=powe(x,y);
	printf("%d raised to the power %d is : %d\n",x,y,result);
	int a,b,result1;
	printf("Enter a number to find their GCD :");
	scanf("%d",&a);
	printf("Enter a number to find their GCD :");
	scanf("%d",&b);
	result1=GCD(a,b);
	printf("The GCD of %d and %d is : %d \n",a,b,result1);
}

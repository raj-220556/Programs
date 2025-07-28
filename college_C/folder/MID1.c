//MID Exam Questions
#include<stdio.h>
int main()
{
	//first Code
	int a,b,c,i;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	c=0;
	for(i=1;i<=b;i++)
	{
		c+=a;
	}
	printf("Multiplication of %d and %d is: %d\n",a,b,c);
	//Second Code
	int d=3+!4*2-3/3;
	printf("%d\n",d);
	//Third Code
	int e,f,g,j;
	printf("Enter lower range:");
	scanf("%d",&e);
	printf("Enter upper range:");
	scanf("%d",&f);
	g=e;
	int count=0;
	for(j=e;j<=f;j++)
	{
		if(j%2==0)
		{
			count++;
			if(count%5==0)
			continue;
			else
			printf("%d,",j);
		}
	}
	int count1=0;
	printf("\n");
	while(e<=f)
	{
		if(e%2==0)
		{
			count1++;
			if(count1%5==0)
			printf("");
			else
			printf("%d,",e);
		}
		e++;
	}
}

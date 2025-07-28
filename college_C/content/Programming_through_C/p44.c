#include<stdio.h>

int  fact (int );

void main()
{
	int a,c;
	scanf("%d", &a);
	c = fact(a);  // actual parameters
	printf(" factorial of %d is %d ", a,c);

} 

int fact ( int x)  // formal parameters
{
	int i=1,f=1;
	for (i=1;i<=x;i++)
		f*=i;
	
	return f;
	
	
	


}

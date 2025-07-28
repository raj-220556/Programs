#include<stdio.h>

int add (int , int);

void main()
{
	int a,b,c;
	scanf("%d%d", &a, &b);
	c = add(a,b);  // actual parameters
	printf(" i am back in main");
	printf(" value of C is %d ",c);

} 

int add ( int x, int y)  // formal parameters
{
	return(x+y);	

}

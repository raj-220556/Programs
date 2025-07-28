#include<stdio.h>

void  add (int , int);

void main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	add(a,b);  // actual parameters
	printf(" i am back in main");

} 

void add ( int x, int y)  // formal parameters
{
	printf(" addition of two numbers is %d ", x+y);

}

#include<stdio.h>

void  swap (int , int);

void main()
{
	int a=10,b=20;
	swap (a,b);  // actual parameters
	printf(" %d  %d ", a,b);

} 

void swap ( int a, int b)  // formal parameters
{
	int c;
	c = a;
	a =b;
	b =c ;

}

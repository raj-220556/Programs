#include<stdio.h>

void  add (int , int);

void main()
{			//	10	20
	int a=10,b=20; //  a--- 1000 b -2000 
	add(a,b);  // actual parameters
	printf(" %d ", a+b);

} 
						//  20		30
void add ( int a, int b)  // formal parameters //  a--- 3000 b --- 4000
{
	printf("%d ", a+b);
	a= 20;
	b= 30;

}

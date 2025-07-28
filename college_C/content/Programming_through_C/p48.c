#include<stdio.h>
void  swap (int * , int *);
void main()
{
	int a=10,b=20;
	swap (&a,&b);  // actual parameters
	printf(" %d  %d ", a,b);
} 
void swap ( int *x, int *y)  // formal parameters
{
	int c;
	c = *x; //  c = *(1000)
	*x =*y; // *(1000) = *(2000)
	*y =c ; // *(2000) = c
}
/*
main
20		10
1000 a 		2000 b

...............................
swap


1000		2000		10
3000 x		4000 y		5000 -c 


*/







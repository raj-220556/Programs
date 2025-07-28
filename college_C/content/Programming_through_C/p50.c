#include<stdio.h>

void rotate( int *e, int *a, int b, int *c , int *d)
{
	*e = *a -b;
	b = *e +*c;
	*d = *a - *c;
	*a = *e - b;
	*c = *a +*d;

}
void main()
{
	int a= 12, b = 23 , c = 34 , d = 45 , e= 56;
	rotate( &d, &e, a , &b, &c);
	printf(" %d %d %d %d %d ", a,b,c,d,e);

}





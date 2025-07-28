#include<stdio.h>
void main()
{	
	int a= 3 , b = 7, c = 5,d=3;
	a *= b+c; //  a = a*(b+c)  = 3 * 12 
	d = d*b +c; //  d = 21 + 5 = 26
	printf(" %d %d ", a,d);
}

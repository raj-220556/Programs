#include<stdio.h>
void main()
{
	int a=3, b = 3,c,d;
	c = --a; // pre increment  ---  a = a-1 , c =a
	d =b--;  // post increment -- d = b, b = b-1
	printf(" a = %d b = %d c = %d d = %d ", a,b,c,d);
}

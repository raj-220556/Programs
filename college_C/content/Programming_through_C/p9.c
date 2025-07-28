#include<stdio.h>
void main()
{
	int a=5, b = 8, c =9, d = 10,e,f;
	e = --a + b++; 
	f = --c - d++; 
	a = ++e + f--; 
	printf(" a =  %d b = %d c = %d d = %d e = %d f=%d ", a,b,c,d,e,f);
}
//		

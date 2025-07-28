#include<stdio.h>
void main()
{
	int a=4, b = 2, c =9, d = 10,e,f;
	e = ++a-b--;
	f = c- e--;
	a = --e + f--;
	b= ++f - a;
	c= --d+b--;
	printf(" a =  %d b = %d c = %d d = %d e = %d f=%d ", a,b,c,d,e,f);
}
           	 // 8 3 11 10 3 6
           	 // 7 -1 8  9 1 6
           	 // 7 -2 11 9 1 6
           	 // 8 -2 8  9 1 6

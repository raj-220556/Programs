#include<stdio.h>
int main()
{
	int a=15,b=6,c=4 , d,e;
	d = a+b*c; //  two operators having different priority  a + ( b*c)  = 39 
	e = a/b*c; //  two operators having same priority  = ( a/b) *c ;  a / (b*c)
		//						2 * 4 = 8 ;  0
	printf(" %d %d ", d,e);
	
}

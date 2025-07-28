// function pointers
#include<stdio.h>
int add (int , int);
int mul(int, int);
int add ( int x , int y)
{
	return(x+y);
}

int mul( int a, int b)
{
	return(a*b);
}
void main()
{
	int (*fp)(int, int);
	int a = 10, b = 20;
	int res;
	res = add( a, b);
	printf(" without fp answer is %d \n", res);
	
	fp = &add; // assigning function pointer
	
	res = fp( 20, 30); // ( *fp)(20,30)
	printf(" with fp answer is %d \n", res);
	
	fp = &mul; 
	res = fp( 20, 30); // ( *fp)(20,30)
	printf(" with fp answer is %d \n", res);
	
	
}












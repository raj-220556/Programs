//0 1 1 2 3 5 8 13 21 ...
//1 2 3 4 5 6 7 8 

#include<stdio.h>

int fibo( int n)
{
	if ( n == 1 )
		return 0;
	else if ( n == 2)
		return 1;
	else
		return ( fibo(n-1) + fibo(n-2));

}



void main()
{
	int n, res;
	printf(" enter the value of n ");
	scanf("%d", &n);
	res = fibo(n);
	printf(" %d \n", res);

}

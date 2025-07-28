#include <stdio.h>
long int fact(int);
int main()
{
	int n;
	long int res;
	printf("Enter a number:");
	scanf("%d",&n);

	res =fact(n);

	printf("Factorial of %d is %ld\n",n,res);
	return 0;

}
/*
n = 5 
		24
return ( 5 * fact(4))		6
		return ( 4 * fact(3));  2
			return( 3 * fact(2));  1
				return( 2 * fact(1))
					return ( 1 * fact(0));
						         1

*/
long int fact(int n)
{
	if(n==0 ) // Base case
		return 1;
	else
	return ( n * fact(n-1)) ; 


}

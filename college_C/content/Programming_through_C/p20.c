#include<stdio.h>
int main()
{
	// perfect square or not 
	int i = 1, n, d, f = 0;
	scanf("%d",&n);
	while(i<=n/2)
	{
		
		d = i *i;
		if ( d == n)
			f =1 ;
		
		i++;
		
			
	}
	if ( f == 1 || n == 1)
	printf(" perfect square ");
	else
	printf(" not a perfect square ");
	
}

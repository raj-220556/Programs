// WAP to print first 100 prime numbers
#include<stdio.h>
int main()
{
	int n = 2, i =1 , c1 =0 , c2 =0;
	while ( n <100)
	{
			i =1;
			c1 =0;
			while ( i<=n)
			{
				if ( n% i == 0)
				c1++;
				
				i++;
			}
			if (c1 == 2)
			{
				printf(" %d ", n);
				c2++;
			}
	
			n++;

	}
	printf("\n %d",c2);
}

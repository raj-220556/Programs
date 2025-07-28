#include<stdio.h>
int main()
{
	int i,j,k=1 ;
	
	for ( i =5; i>=0; i= i-1)
	{	
		
		for ( j = 1;j<=i;j--)
		{
		printf(" %d ", i); //  1 2 3  4 5 \n 1 2 3 4 5 \n	
		
		}
		printf(" \n");
	}
}

//i = 1		2		3		4		5 
//j = 1,2,3,4,5	1,2,3,4,5	1,2,3,4,5	1,2,3,4,5	1,2,3,4,5
	
	
	
	
	

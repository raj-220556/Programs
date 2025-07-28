#include<stdio.h>
void main()
{
	int a[3][3],b[3][3] , c[3][3] ={0}, d[3][3]; 
	int i,j;
	for ( i =0;i<3;i++)
	{
		for(j = 0;j<3;j++)
		{
			printf(" enter the value of a[%d][%d] :", i,j);
			scanf("%d", &a[i][j]);
		
		}
	}
	
	
	for ( i =0;i<3;i++)
	{
		for(j = 0;j<3;j++)
		{
			printf(" enter the value of b[%d][%d] :", i,j);
			scanf("%d", &b[i][j]);
		
		}
	}
	// 3 x 3 
	/*
	a		 b 		=   
	1 2 1   	3 2 1	    00	a00*b00 + a01*b10 + a02*b20    ----    -----
	2 1 1		1 2 1	     10	a10*b00 + a11*b10 + a12*b20    ----     -----
	1 1 2		2 1 1	     20	a20*b00 + a21*b10 + a22*b20    ..... ........
	
	*/
	int k; 
	for ( i =0;i<3;i++)
	{
		for(j = 0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
			c[i][j] += a[i][k] *b[k][j];
			}
		}
	}
	
	
	printf(" multiplication \n");
	for ( i =0;i<3;i++)
	{
		for(j = 0;j<3;j++)
			printf("%d \t ", c[i][j]);
			
		printf("\n");		
	
	}
	
	
	
	

}	
	
	
	
	

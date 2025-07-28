#include<stdio.h>
void main()
{
	int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
	int i,j;
	for ( i =0;i<2;i++)
	{
		for(j = 0;j<3;j++)
			printf("%d \t ", c[i][j]);
			
		printf("\n");		
	
	}
}

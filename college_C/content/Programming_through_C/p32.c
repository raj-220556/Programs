#include<stdio.h>
// bubble sorting
void main()
{
	int a[5] ;
		int k,j,i,temp;
	for(i=0;i<5;i++)
	{	
		printf(" enter the %d element ",i);
		scanf("%d",&a[i]);
	}

	for ( i =1 ;i<=5;i++)
	{
		for ( j =0;j<4;j++)
		{	
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			
			
			}
		
		}
	
	}
	
	
	
	for(i=0;i<5;i++)
	{	
		printf("%d  ",a[i]);
	}
	
}

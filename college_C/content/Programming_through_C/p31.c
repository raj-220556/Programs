#include<stdio.h>
void main()
{
	int a[5] ;
		int k,j,i,temp;
	for(i=0;i<5;i++)
	{	
		printf(" enter the %d element ",i);
		scanf("%d",&a[i]);
	}

	printf(" enter the value of k ");
	scanf("%d", &k);
	int size = 5;
	for ( j =0;j<k;j++)
	{
		temp = a[size -1];
		for ( i = 4;i>0;i--)
			a[i]= a[i-1];
		a[0] = temp;
	}	
	
	
		
	for(i=0;i<5;i++)
	{	
		printf("%d  ",a[i]);
	}
	
	
}

#include<stdio.h>
void main()
{
	int a[5] ;
	int i,max1,max2,min;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	max1 = a[0];
	min= a[0];
	for(i=1;i<5;i++)
	{
		if( a[i]>max1)
			max1 = a[i];
		if ( a[i] <min)
			min = a[i];
	}
	
	max2 = min;
	for(i=0;i<5;i++)
	{
		
		if ( a[i]>max2 && a[i] != max1)
			max2 = a[i];
	
	}
	printf(" %d ", max2);	
}

#include<stdio.h>
void main()
{
	int arr[5];
	int i,max;
	for(i=0;i<5;i++)
	{	
		printf(" enter the %d element ", i);
		scanf("%d", &arr[i]);
		
	
	}
	max = arr[0];
	for ( i = 1 ; i<5; i++)
	{
		if ( max < arr[i])
			max = arr[i];
	}
		printf(" %d ", max);


}


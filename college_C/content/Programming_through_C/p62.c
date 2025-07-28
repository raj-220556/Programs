#include<stdio.h>

void main()
{

	int arr[5] = { 12,34,5,6,78};
	int *ptr;
	int i;
	ptr = &arr[0];
	for ( i =0;i<5;i++)
	{
		ptr = &arr[i];
		printf(" ptr = %u and *ptr = %d \n ", ptr, *ptr  );
		
	}
	printf(" ptr = %u and *ptr = %d \n ", ptr, *ptr);
}

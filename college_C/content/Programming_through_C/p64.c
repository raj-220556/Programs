#include<stdio.h>
// constant pointer 

void main()
{
	int a = 100,  b = 300;
	int * const ptr = &a;
	
	printf("  ptr is %u  *ptr = %u \n", ptr, *ptr );
	*ptr = 200;
		printf("  ptr is %u  *ptr = %u \n", ptr, *ptr );
	// ptr = &b; // invalid statemnt 
}

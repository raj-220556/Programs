//  pointer to a pointer
#include<stdio.h>
/*
variable 	address		value
a		1000		100
ptr		2000		1000  // ptr = &a
pptr		3000		2000 // pptr = &ptr */
void main()
{
	int a =100 , *ptr, **pptr;
	ptr = &a; pptr = &ptr;
	printf("  a  = %u \n",a); // 100
	printf("  ptr  = %u \n",ptr); // 1000
	printf("  &a  = %u \n",&a); // 1000
	printf("  *ptr  = %u \n",*ptr); // 100
	printf("  &ptr  = %u \n",&ptr); // 2000
	printf("  pptr  = %u \n",pptr); // 2000
	printf("  &pptr  = %u \n",&pptr); // 3000	 
	printf("  *pptr  = %u \n",*pptr ); // 1000
	printf("  **pptr  = %u \n",**pptr); // 100
}

// array of pointers

#include<stdio.h>
void main()
{
	int a = 10, b = 20, c = 30;
	printf(" &a  =  %u &b = %u  &c  = %u\n", &a , &b,  &c);
	int *ptr[3],i;
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	
	for ( i = 0 ; i<3;i++)
	 printf(" ptr[%d] = %u *ptr[%d] = %u \n", i, ptr[i], i, *ptr[i]);


	printf(" ptr[0] = %u *ptr[0] = %u \n", ptr[0],  *ptr[0]);
	ptr[0]++; // ptr[0] = ptr[0]+ 1; 1000 + 4 = 1004
	
	printf(" ptr[0] = %u *ptr[0] = %u \n", ptr[0],  *ptr[0]);
	ptr[0]++;
	printf(" ptr[0] = %u *ptr[0] = %u \n", ptr[0],  *ptr[0]);
	
}

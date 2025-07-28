#include<stdio.h>
// pointer to constant

void main()
{
	int a = 100,  b = 300;
	
	 int const *ptr;
	ptr = &a;
	a  = 200; 
	// *ptr = 200; //  invalid statemnt 
	ptr = &b;  
	printf(" ptr = %u and *ptr = %u \n", ptr , *ptr);


}

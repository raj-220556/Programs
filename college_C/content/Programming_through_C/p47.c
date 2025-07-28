#include<stdio.h>
/*
Pointers -------  variable which could store address of another variable

   10  <----------   1000	
a  1000            ptr 2000


*ptr--- *(1000) = 10
*(&a)-- a=10 
*/
void main()
{
	int a ;   
	a =10;
	int *ptr; 
	ptr = &a;
	printf("\n value of a is %u ",a);
	printf("\n Address location of a is  %u ", &a);
	printf("\n Value of ptr %u ",ptr);
	printf("\n Address of ptr  %u ", &ptr);
	printf("\n Value present in address location present in ptr %u ", *ptr);

	*ptr = 20;
	printf("Indirectly changing the value of a using *ptr %u ",a);

}


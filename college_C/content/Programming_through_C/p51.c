#include<stdio.h>
// passing an array to afunction , pointers, pointer arithcmetic,  passing a character array to a function 
void fun()
{
	int a = 10;
	printf(" a = %d ",a);
	a++;

}
// 10 11 21 , 10 10 21 , 
// scope , lifetime ---
// auto storage -- scope -- in the block , lifetime -- completion of the block

void main()
{

	int b = 20;
	fun();
	b++;
	fun();
	printf(" b = %d " , b);
	{
		int c =100;
		printf(" c = %d",c);
	
	}
	// printf(" c = %d ", c);



}





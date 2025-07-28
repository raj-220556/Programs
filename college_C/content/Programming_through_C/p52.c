#include<stdio.h>
// passing an array to afunction , pointers, pointer arithcmetic,  passing a character array to a function 
void fun()
{
	static int a = 10;
	printf(" a = %d ",a);
	a++;

}
// 10 11 21 , 10 10 21 , 
// scope , lifetime ---
// auto storage -- scope -- in the block , lifetime -- completion of the block
// auto initializes every time the function calls , default value is garbage
// static storage -- scope -- in the block , lifetime -- completion of the program
// static initializes only once , default value is 0
void main()
{

	int b = 20;
	fun();
	b++;
	fun();
	printf(" b = %d " , b);
}

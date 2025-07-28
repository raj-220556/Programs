#include<stdio.h>
void fun()
{
	int a = 10;
	static int b = 100;
	printf(" %d %d",a,b);
	a++;
	b = a;

}
// 10 100 , 10 11  
void main()
{
	fun();
	fun();

}

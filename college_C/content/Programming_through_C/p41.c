#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
void f5();



void f1()
{ 
		printf(" 1 ");
		f3();
}
void f2()
{ 
	printf(" 2 ");
	f4();
}
void f3()
{ 
	printf(" 3 ");
	f2();
}
void f4()
{ 
	printf(" 4 ");
	f5();
}
void f5()
{ 
	printf(" 5 ");
}

void main()
{
	f1();
	f3();
	f5();
	
}


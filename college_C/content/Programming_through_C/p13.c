#include<stdio.h>
int main()
{
int a=5,b=6,c=4, big;
big = (a>b && a>c) ? a : ( b>c ? b: c);
printf("%d is big\n", big);
return 0;
}
	// if ( a>b)
	// 	big = a;
	// else
	// 	big = b;

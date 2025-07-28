#include<stdio.h>
// goto statement
int main()
{
	int i=1,j=3;
	
	x1 : printf(" %d ",i);
		i++;
	x2 :	printf("%d ",j);  // 1 3 2 4 5 6 7 8 9 
		j++;
		if (j< 5)
		 goto x1;
		if( j<10)
		 goto x2;
	
	
	/*
	Syntax for goto statement :
	
	label : <stmts>
	       ......
	       .....
	       
	       
	       goto label;
	
	*/


	
	
}

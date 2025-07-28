#include<stdio.h>

void main()
{

		int a =100;
		void *gp;
		gp = &a;
		
		printf("   value of a is %d \n", *(int *) gp);
		char ch = 'R';
		
		gp = &ch;
		
		printf(" value of ch is %c", *(char *)gp);
}

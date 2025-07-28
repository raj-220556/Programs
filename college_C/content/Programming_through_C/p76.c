#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE  *fp ;
	fp = fopen("p10.c", "r");
	if( fp == NULL)
	{
		printf(" error in reading file ");
		exit(1);
		
	}
	else
	{
		char ch;
		do
		{
		ch = getc(fp);	
		putchar(ch);
		
		}while(ch!=EOF);	
	
		fclose(fp);
	
	}
	


}

#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE  *fp ;
	fp = fopen("players.txt", "r");
	if( fp == NULL)
	{
		printf(" error in reading file ");
		exit(1);
		
	}
	else
	{
		int no;
		char name[10];
		while(!feof(fp))
		{
		fscanf(fp,"%d%s", &no, name);
		printf("%d %s\n", no, name);
		
		}
		fclose(fp);	
	}
}

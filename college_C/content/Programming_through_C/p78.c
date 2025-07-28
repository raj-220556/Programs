

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
		char str[70];
		while(fgets(str,70,fp)!=NULL)
	{
		printf("%s",str);
	}
		printf("File read computer");
		fclose(fp);
	}
}

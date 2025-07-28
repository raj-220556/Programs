#include<stdio.h>
void main()
{			  	
	char str1[20];  
	int len=0;
	printf (" enter the string ");
	scanf("%s", str1);
	while(str1[len] != '\0')
		len++;
		
	int i, c=0;
	
	for(i=0;i<len/2;i++)
	{
		if ( str1[i] != str1[len-i-1] )
		{
			c=1;
			break;
		}
		
	}
		if ( c == 1)
			printf(" not a palindrome ");
		else
			printf(" palindrome ");
	}	
		

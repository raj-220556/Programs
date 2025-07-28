#include<stdio.h>
void main()
{			  	
	char str[20];  
	int i,len=0;
	printf (" enter the string ");
	scanf("%s", str);
	while(str[len] != '\0')
		len++;
	
	int v=0;
	for(i=0;i<len;i++)
	{
		if ( str[i] == 'A' || str[i] == 'a' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I'
		 || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')


		v++;
	}	
		
		
	printf(" length of the string is %d ", len);
	printf("total no of vowels : %d",v);
}

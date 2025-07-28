// pointers and strings
#include<stdio.h>
void main()
{
	char str[20] = "hello hi ";
	char *ptr;
	ptr = str;
	
	int i=0;
	while ( ptr[i] != '\0')
	{
	
		printf("%c", ptr[i]); // *(ptr+i) 
		i++;
	}
	
}

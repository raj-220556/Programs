#include<stdio.h>
void main()
{	  // 1000		 1001    1002	1003   1004  1005	
	char str1[20] =  "rgukt";
	
//	Null character '\0' 
	
	
	str1[2] ='\0';
	
	// printf (" enter the string ");
	 // scanf("%s", str1);
	printf(" the entered string is %s \n", str1);
	
	 for(int i =0;i<20;i++)
		printf("%c", str1[i]);


}





// String -- collection of characters

// s1 = "hai"---- python its valid

// char ch = "hai";-- invalid in C , becoz char datatype can hold only one character 

// char str1[20] ={'h','a','i'};
// char str1[20] = "hai"

// char str2[20];
// str2 = "hello"; // invalid 
 

// int a = 10;

// a = 20;






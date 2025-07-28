#include<stdio.h>
// functions

int stringlength(const char* str)
{
	int l=0;
	while(str[l]!='\0')
	{
		l++;
	}
	return l;
}
void stringcopy(char*dest,const char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}
void stringconcat(char *dest,const char*src)
{
	int i=0;
	while(dest[i]!='\0')
	{
		i++;
}
    	int j=0;
    	while(src[j]!='\0')
    	{
	 	dest[i]=src[j];
	  	i++;
      	j++;
	}
dest[i]='\0';
}
void stringupper(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			str[i]=str[i]-('a'-'A');
		}
		i++;
	}
}
int stringcompare(const char*str1,const char*str2)
{
	int i=0;
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			return 0;
		}
		i++;
	}
	return str1[i]==str2[i];
}
int mul(int N,int K)
{
	if(K==0 || N==0)
	{
		return 0;
	}
	if(N<0)
	{
		N=-N;
	}
	int T=N;
	if(K>0)
	{
	    int i=0;
	    for(i=0;i<K-1;i++)
	    {
	    	N=N+T;
		}
	}
	return N;
}
int div(int D,int B)
{
	if(B==0)
	{
		printf("INVALID DIVISION");
	}
	int i;
	if(D<B)
	{
		return 0;
	}
	while(D>0)
	{
		D=D-B;
		i++;
	}
	return i;
}
int main(){

    // // 1...string operations without using predefined by using different functions
	// char str1[100],str2[100];
	// char result[200];
	// printf("Enter the first string :");
	// scanf("%s",str1);
	// printf("Enter the second string :");
	// scanf("%s",str2);
	// printf("Length of the first string : %d\n",stringlength(str1));
	// printf("Length of the first string : %d\n",stringlength(str2));
	// stringcopy(result,str1);
	// printf("Copy of the string : %s\n",result);
	// stringcopy(result,str1);
	// stringconcat(result,str2);
	// printf("Concatenation of strings : %s\n",result);
	// if(stringcompare(str1,str2))
	// {
	// 	printf("Both strings are equal\n");
	// }
	// else
	// {
	// 	printf("strings are not equal\n");
	// }


	// //2....using functions to mul and div.without using * and /
    // int N,K;
	// int D,B;
	// int result,result1;
	// printf("Enter the first number :");
	// scanf("%d",&N);
	// printf("Enter the second number :");
	// scanf("%d",&K);
	// result=mul(N,K);
	// printf("The multiplication of the two numbers are %d\n",result);
	// printf("Enter the first number :");
	// scanf("%d",&D);
	// printf("Enter the second number :");
	// scanf("%d",&B);
	// result1=div(D,B);
	// printf("The division of the two numbers are %d\n",result1);

}

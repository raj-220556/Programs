#include<stdio.h>
#include<string.h>
int main()
{
/*	//1st question
	char name[100];
	char str[100];
	printf("Enter the string :");
	gets(name);
	printf("The entered string is << %s >>\n",name);
	int i=0;
	while(name[i]!='\0')
	{
		if(name[i]>=65 && name[i]<=90)
		str[i]=name[i]+32;
		if(name[i]>=97 && name[i]<=122)
		str[i]=name[i]-32;
		i=i+1;
	}
	printf("The resultant string is << %s >>\n",str);
	//2nd question
	char word[100];
	printf("Enter the string : ");
	gets(word);
	printf("The entered string is %s\n",word);
	int i=0;
	int vow=0;
	int cons=0;
	int num=0;
	int len=strlen(word);
	for(i=0;i<=len;i++)
	{
		if(word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U')
		{
			vow=vow+1;
		}
        else if(isalpha(word[i]))
        cons=cons+1;
        if(word[i]>=48 && word[i]<=57)
        {
        	num=num+1;
		}
	}
	printf("The no of vowels in the given string is %d\n",vow);
	printf("The no of consonant in the given string is %d\n",cons);
	printf("The no of numbers in the given string is %d\n",num);
	//3rd question
	char original[100];
	char palindrom[100];
	printf("Enter the string :");
	gets(original);
	printf("The entered string is << %s >>\n",original);
	int len=strlen(original);
	int i;
	for(i=0;i<=len;i++)
	{
		palindrom[i]=original[len-i-1];
	}
	printf("The reversed string is << %s >>\n",palindrom);
	int result=0;
	for(i=0;original[i]!='\0' && palindrom[i]!='\0';i++)
	{
		if(original[i]==palindrom[i])
		result=1;
	}
	if(result==1)
	{
		printf("The entered string is palindrome\n");
	}
	else
	printf("The entered string is not palindrome");
	//4th question
	char string[100];
	char string1[100];
	printf("Enter the string :");
	gets(string);
	printf("Entered string is << %s >>",string);
	int i,j;
	char b;
	for(i=0;i<=strlen(string);i++)
	{
		for(j=0;j<=strlen(string);j++)
		{
			if(string[j]<string[j+1])
			{
				b=string[j];
				string[j]=string[j+1];
				string[j+1]=b;
			}
		}
	}
	i=0;
	while(string[i]!='\0')
	{
		string1[i]=string[strlen(string)-i-1];
		i++;
	}
	printf("The resulted sorted string is << %s >>\n",string);
	printf("The resulted sorted string is << %s >>\n",string1);
	
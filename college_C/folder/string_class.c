#include<stdio.h>
#include<string.h>
int main()
{
	char string1[500];
	printf("Enter the string :");
	gets(string1);
	int i;
	int length=0;
	for(i=0;string1[i]!='\0';i++)
	{
		length=length+1;
	}
	printf("The length of the string : %d\n",length);
	printf("The length of the string : %d\n",strlen(string1));
	
	char string2[500];
	printf("Enter the string :");
	gets(string2);
	char string3[300];
	char string4[300];
	for(i=0;string2[i]!='\0';i++)
	{
		string3[i]=string2[i];
	}
	printf("The entered string is %s\n",string2);
	printf("The copied string is %s\n",string3);
	printf("The copied string is %s\n",strcpy(string4,string2));
	char string5[500];
	char string6[500];
	printf("Enter the string :");
	gets(string5);
	printf("Enter the string :");
	gets(string6);
	char string7[500];
	for(i=0;string5[i]!='\0';i++)
	{
		string7[i]=string5[i];
	}
	string7[i]=' ';
	int j;
	for(j=0;string6[j]!='\0';j++)
	{
		string7[i+j+1]=string6[j];
	}
	printf("The concatenated string is %s\n",string7);
	printf("The concateneted string is %s\n",strcat(string5,string6));
	char string8[500];
	char string9[500];
	printf("Enter the string : ");
	gets(string8);
	printf("Enter the string : ");
	gets(string9);
	int result=0;
	int c;
	for(i=0;string8[i]!='\0';i++)
	{
		if(string9[i]==string8[i])
		{
			result=0;
		}
		else if(string9[i]!=string8[i])
		{
		    if(string9[i]>string8[i])
		    result=1;
		    else
		    result=-1;
		    break;
		}
	}
	if(result==0)
	printf("The entered strings are equal i.e; %d\n",result);
	else if(result>0)
	printf("The entered string is not equal i.e; %d\n",result);
	else{
	printf("The entered strings are not equal i.e; %d\n",result);}
	printf("The resultant comparision is %d\n",strcmp(string9,string8));
	char string10[500];
     char string11[500];
     char string12[500];
     printf("Enter the string : ");
     gets(string10);
     int len=strlen(string10);
     for(i=0;string10[i]!='\0';i++)
     {
         string11[len-i-1]=string10[i];
     }
     string11[i]='\0';
     printf("The resultant reversed string is %s\n",string11);
     printf("The resultant reversed string is %s\n",strrev(string10));
}

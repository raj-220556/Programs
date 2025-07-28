#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch;
	int word=0,line=1;
	char str[100];
	fp=fopen("raj.txt","w");
	if(fp==NULL)
	{
		printf("Unable to open the txt file");
	}
	else
	{
		printf("Enter the matter you want to rewrite in the file :");
		scanf("%[^\n]s",str);
	    fputs(str,fp);
		fclose(fp);
}
		fp=fopen("raj.txt","r");
	if(fp==NULL)
	{
		printf("Unable to open the txt file");
	}
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch=='\n')
			{
				line++;
			}
			if(ch==' ' || ch == '\n')
			{
				word++;
			}
			}
		printf("The no of lines in the paragraph is %d\n",line);
		printf("The no of words in the paragraph is %d\n",word);	
		fclose(fp);
	printf("The copying of matter into another file\n");
	FILE *fb;
	fp=fopen("raj.txt","r");
	if(fp==NULL)
	{
		printf("Opening of the fiest file is not possible");
		return 1;
	}
	fb=fopen("Neeraj.txt","w");
	if(fb==NULL)
	{
		printf("Opening of the second file is not possible");
		return 1;
	}
	int charc;
	char str1[1000];
	while((charc=fgetc(fp))!=EOF)
	{
	fputc(charc,fb);
	}
	fclose(fp);
	fclose(fb);
	printf("Appending of One file to another one\n");
	FILE *ff;
	ff=fopen("raj.txt","a");
	if(ff==NULL)
	{
		printf("Opening of the second file is not possible");
		return 1;
	}
	FILE *fg;
		fg=fopen("Neeraj.txt","r");
	if(fg==NULL)
	{
		printf("Opening of the second file is not possible");
		return 1;
	}
	fseek(ff,0,SEEK_END);
	while((ch=fgetc(fg))!=EOF)
	{
		fputc(ch,ff);
	}
	fclose(ff);
	fclose(fg);
	printf("search for the given word");
	FILE *fh;
	char character[100];
	char str2[100];
	char str3[100][100];
	fh=fopen("raj.txt","w");
	if(fh==NULL)
	{
		printf("Unable to open the txt file");
	}
	else
	{
		printf("Enter the matter you want to rewrite in the file :");
		scanf("%[^\n]s",str2);
		printf("Enter the character you want to search :");
		scanf("%[%\n]s",character);
	    fputs(str2,fh);
		fclose(fh);
}
		fh=fopen("raj.txt","r");
	if(fh==NULL)
	{
		printf("Unable to open the txt file");
	}
	int i=0;
	int j=0;
		while((ch=fgetc(fh))!=EOF)
		{
			if(ch==' ' || ch == '\n')
			{
				str3[j][i]='\0';
				j=j+1;
			}
			str3[j][i]=ch;
			i=i+1;
			}
	for(i=0;i<j;i++)
	{
		if(strcmp(str3[i],character)==0);
		{
			printf("The character is found\n");
		}
	}
}

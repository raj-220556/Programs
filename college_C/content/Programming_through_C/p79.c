#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp = fopen("test.txt", "w");

	printf("Enter your Input\n");
		while((c =getchar()) != EOF)
			putc(c,fp);
		fclose(fp);
	
	printf("\nYou have entered\n");


	fp = fopen("test.txt","r");
		while((c =getc(fp)) != EOF)
			printf("%c",c);
		fclose(fp);
	return 0;
}

#include<stdio.h>
int main()
{
/*	//printing the factors
	int n,i;
	printf("Enter a number to print its factor :");
	scanf("%d",&n);
	printf("The factors of the given number are : ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d,",i);
		}
		printf("\n");
	}
	//perfect number
	int n1,n2,lower_range;
	printf("Enter the number to check whether perfect or not :");
	scanf("%d",&n1);
	printf("Enter the lower range of the perfect number :");
	scanf("%d",&lower_range);
	while(n1<=lower_range)
	{
	int i1=1;
	n2=n1;
	int sum=0;		
	while(i1<n1)
	{
		if(n1%i1==0)
		{
			sum=sum+i1;
		}
		i1++;
	}
	if(n2==sum)
	printf("The perfect numbers are %d\n",sum);
	n1++;
   }
	//diamond pattern
	int i,j,k;
	int n;
	printf("Enter the height of the pattern : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n-i; j++)
      printf(" ");

    for (k = 1; k <= 2*i-1; k++)
    {
      printf("*");
}

    printf("\n");
  }
  	for (i = 1; i<n; i++)
  {
    for (j = 1; j <=n-(n-i); j++)
      printf(" ");

    for (k = 1; k <=2*(n-i)-1; k++)
    {
      printf("*");
}

    printf("\n");
  }
/*  	int i,j,k;
	int n;
	printf("Enter the height of the pattern : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n-i; j++)
      printf(" ");

    for (k = 1; k <= 2*i-1; k++)
    {
      printf("*");
}

    printf("\n");
}*/
int n,num=2;
printf("Enter the height of the pattern : ");
scanf("%d",&n);
int i,j,k;
for(i=1;i<=n;i++)
{
	for(j=i;j<=n-i;j++)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		int isprime=0;
		while(isprime)
		{
			isprime=1;
			for(k=2;k*k<=num;k++)
			{
				if(num*k==0)
				{
					isprime=0;
					break;
				}
			}
			if(isprime)
			{
				num++;
			}
		}
		printf("%d",num);
		num++;
	}
}
}

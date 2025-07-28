#include <stdio.h>
int prime(int num);
int prime(int num){
	int i,flag;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		return flag=0;
	}       
}
	if(i==num)
	{
		return(1);
	}
}


int main(){
    // // 1...factors of given number
    // int number,i;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // printf("Factors of %d are: ", number);
    // for (i = 1; i <= number; i++) {
    //     if (number % i == 0) {
    //         printf("%d ", i);
    //     }
    // }
    // printf("\n");

    // // 2...factorial of given number
    // int t1,u1;
	// int v1=1;
	// printf("Enter the range of the factorial : ");
	// scanf("%d",&t1);
	// for(u1=1;u1<=t1;u1++)
	// {
	// 	v1=v1*u1;
	// }
	// printf("The factorial of the given range is %d",v1);

    // 3...palindrome or not
    // int c1,d1,num11;
	// int ll,ul;
	// printf("Enter the lower range to print the palindrome numbers :");
	// scanf("%d",&ll);
	// 	num11=ll;
	// 	int sum3=0;
	// 	while(num11!=0)
	// 	{
	// 		c1=num11%10;
	// 		sum3=sum3*10+c1;
	// 		num11=num11/10;
	// 	}
	// 	if(sum3==ll)
	// 	printf("The palindrome number is %d\n",sum3);
	// 	ll++;

    // 4...prime or not
    // 	int r,s;
	// int count=0;
	// printf("Enter a number to check whether prime or not : ");
	// scanf("%d",&r);
	// for(s=1;s<=r;s++)
	// {
	// 	if(r%s==0)
	// 	count=count+1;
	// }
	// if(count==2)
	// printf("The given number is a prime");
	// else
	// printf("The given number is not a prime");

    // // 5...fibonacci series
    // 	int w1,x1,y1,a1;
	// int z1=1;
	// printf("Enter the range for the fabinocci series : ");
	// scanf("%d",&w1);
	// x1=0;
	// y1=1;
	// printf("%d,",x1);
	// printf("%d,",y1);
	// while(z1<=w1-2)
	// {
	//  a1=x1+y1;
	//  printf("%d,",a1);
	//  x1=y1;
	//  y1=a1;	
	//  z1=z1+1;
	// }

    // // 6...print N primes
    // 	int t,u,v;
	// int upper_range,lower_range;
	// printf("Enter the lower range to print the prime numbers :");
	// scanf("%d",&lower_range);
    // printf("Enter the upper range to print the prime numbers :");
	// scanf("%d",&upper_range);
	// while(lower_range<=upper_range)
	// {
	// 	v=1;
	// 	int count1=0;
	//     while(v<=lower_range)
	//     {
	//     	if(lower_range%v==0)
	//     	{
	//     		count1=count1+1;
	// 		}
	//     	v++;
	// 	}
    //    	if(count1==2)
    //    	{
    // 	  printf("%d\n",lower_range);
    //     }
    // 	lower_range++;
	// }

    // // 7...pascal triangle
    // int n, i, j, coefficient;
    // printf("Enter the number of rows for Pascal's Triangle: ");
    // scanf("%d", &n);
    // printf("Pascal's Triangle:\n");
    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n - i - 1; j++) {
    //         printf(" ");
    //     }
    //     coefficient = 1;
    //     for (j = 0; j <= i; j++) {
    //         printf("%d ", coefficient);
    //         coefficient = coefficient * (i - j) / (j + 1);
    //     }
    //     printf("\n");
    // }

    // // 8...perfect numbers upto N
    // int n1,n2,lower_range;
    // printf("Enter the upper range:");
    // scanf("%d",&n1);
    // printf("Enter the lower range:");
    // scanf("%d",&lower_range);
    // while(n1<=lower_range)
    // {
    // 	int i1=1;
    // 	n2=n1;
    // 	int sum=0;
    // 	while(i1<n1)
    // 	{
    // 		if(n1%i1==0)
    // 		{
    // 			sum=sum+i1;
	// 		}
	// 		i1++;
	// 	}
	// 	if(n2==sum)
	// 	{
	// 		printf("The perfect numbers are %d\n",sum);
	// 		n1++;
	// 	}
	// }

    // // 9...Diamond pattern
    // 	int n,i,j,k;
	// printf("Enter the height of the pyramid : ");
	// scanf("%d",&n);
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=1;j<=n-i;j++)
	// 	{
	// 		printf(" ");
	// 	}
	// 	for(k=1;k<=2*i-1;k++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=1;j<=i;j++)
	// 	{
	// 		printf(" ");
	// 	}
	// 	for(k=2;k<2*(n-i)+1;k++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }

    // // 10...pattern
    int num=2;
	int i,j,k;
	int n;
	printf("Enter the height of the pattern : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(k=0;k<n-i;k++)
		{
			printf("   ");
		}
		for(j=0;j<=i;)
		{
			if(prime(num))
			{
			printf("%d ",num);
			j++;
		}
			num++;
		}
	}
	return(0);


    
}
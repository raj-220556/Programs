#include<stdio.h>
#include<math.h>
int main()
{
/*	//First Question
	printf("N220622");
	printf("\n");
	//Second Question
	int n;
	printf("Enter your current Age : ");
	scanf("%d",&n);
	if(n>=18)
	printf("You are eligible for voting\n");
	else
	printf("You are not eligible for voting\n");
	//Third Question
	int a,b;
	char e;
	printf("Enter the value of any number: ");
	scanf("%d",&a);
	printf("Enter the value of any number: ");
	scanf("%d",&b);
	printf("Enter the operator you need to need to perform: ");
	scanf("%c",&e);
	scanf("%c",&e);
	if( e =='+')
	printf("You are performing addition The value is %d\n",a+b);
	else if( e == '-')
	printf("You are performing substraction The value is %d\n",a-b);
	else if( e== '*')
	printf("You are performing multiplication The value is %d\n",a*b);
	else if( e== '/')
	printf("You are performing division The value is %d\n",a/b);
	else if( e== '%')
	printf("You are performing modulus division The value is %d\n",a%b);
	printf("Now, We are doing the same process by switch case method\n");
	int c,d;
	char o;
	printf("Enter the value of any number: ");
	scanf("%d",&c);
	printf("Enter the value of any number: ");
	scanf("%d",&d);
	printf("Enter the operator you need to need to perform: ");
	scanf("%c",&o);
	scanf("%c",&o);
	switch(o)
	{
		case '+':printf("You are performing addition The value is %d\n",c+d);
		break;
		case '-':printf("You are performing substraction The value is %d\n",c-d);
		break;
		case '*':printf("You are performing multiplication The value is %d",c*d);
		break;
		case '/':printf("You are performing division The value is %d\n",c/d);
		break;
		case '%':printf("You are performing modulus division The value is %d\n",c%d);
		break;
	}
	//Fourth Question
	printf("Welcome! To Calculator Application,\n ");
	int i;
	start:
	{
	int f,g,h;
    printf("Enter the value of any number: ");
	scanf("%d",&f);
	printf("Enter the value of any number: ");
	scanf("%d",&g);
	printf("Enter the operator you need to need to perform: ");
	scanf("%c",&h);
	scanf("%c",&h);
	if( h =='+')
	printf("You are performing addition The value is %d\n",f+g);
	else if( h == '-')
	printf("You are performing substraction The value is %d\n",f-g);
	else if( h== '*')
	printf("You are performing multiplication The value is %d\n",f*g);
	else if( h== '/')
	printf("You are performing division The value is %d\n",f/g);
	else if( h== '%')
	printf("You are performing modulus division The value is %d\n",f%g);
	}
	printf("Do you wish to continue:[Press '0' to exit , Press '1' to continue]:");
	scanf("%d",&i);
	if(i == 0)
	printf("Thanks for Using our calculator Application\n");
	else
	goto start;
	//Fifth Question
	int j,i;
	float k,p,l,m;
	printf("Welcome!\n Let's create a converstion between farenheit and celcius\n");
	printf("1.Farenheit to celcius\n 2.Celcius to farenheit\n");
	printf("Please Enter your option : ");
	scanf("%d",&j);
	stop:
	{
	if(j==1)
	{
		printf("Enter the value of farenheit : ");
		scanf("%f",&k);
		p=(k-32)*5/9;
		printf("The value of fahrenheit in celsius is %f\n",p);
	}
	else if(j==2)
	{
	    printf("Enter the value of celsius : ");
		scanf("%f",&l);
		m=9/5*l+32;
    	printf("The value of celsius in fahrenheit is %f\n",m);	
	}
	else
	printf("You entered invalid number\n");
    }
   	printf("Do you wish to continue:[Press '0' to exit , Press '1' to continue]:");
	scanf("%d",&i);
	if(i == 0)
	printf("Thanks for Using our convertor\n");
	else
	goto stop;
	//sixth Question
	int num1,num2,q;
	printf("Enter the number that wants to be swapped:");
	scanf("%d",&num1);
	printf("Enter the number that wants to be swapped with:");
	scanf("%d",&num2);
	q=num1;
	num1=num2;
	num2=q;
	printf("The swapped numbers are %d and %d\n",num1,num2);
	int num3,num4;
	printf("Enter the number to be swapped without the third variable:");
	scanf("%d",&num3);
	printf("Enter the number to be swapped with without using third variable:");
	scanf("%d",&num4);
	num3=num3+num4;
	num4=num3-num4;
	num3=num3-num4;
	printf("The swapped numbers are %d and %d\n",num3,num4);
	int num5,num6;
	printf("Enter the number to be swapped by multiplication and division :");
	scanf("%d",&num5);
	printf("Enter the number to be swapped with by multiplication and division :");
	scanf("%d",&num6);
	num5=num5*num6;
	num6=num5/num6;
	num5=num5/num6;
	printf("The swapped numbers are %d and %d\n",num5,num6);
	int num7,num8;
    printf("Enter the number to be swapped by using XOR operator :");
	scanf("%d",&num7);
	printf("Enter the number to be swapped with by using XOR operator :");
	scanf("%d",&num8);	
	num8=num7^num8;
	num7=num7^num8;
	num8=num7^num8;
	printf("The swapped numbers are %d and %d\n",num7,num8);
	//Seventh Question
	int r,s;
	int count=0;
	printf("Enter a number to check whether prime or not : ");
	scanf("%d",&r);
	for(s=1;s<=r;s++)
	{
		if(r%s==0)
		count=count+1;
	}
	if(count==2)
	printf("The given number is a prime");
	else
	printf("The given number is not a prime");
	//Eighth Question
	int t,u,v;
	int upper_range,lower_range;
	printf("Enter the lower range to print the prime numbers :");
	scanf("%d",&lower_range);
    printf("Enter the upper range to print the prime numbers :");
	scanf("%d",&upper_range);
	while(lower_range<=upper_range)
	{
		v=1;
		int count1=0;
	    while(v<=lower_range)
	    {
	    	if(lower_range%v==0)
	    	{
	    		count1=count1+1;
			}
	    	v++;
		}
       	if(count1==2)
       	{
    	  printf("%d\n",lower_range);
        }
    	lower_range++;
	}
	//ninth question
	float area,perimeter;
	float w,x;
	printf("Enter the length of the rectangle :");
	scanf("%f",&w);
	printf("Enter the breadth of the rectangle : ");
	scanf("%f",&x);
	area=w*x;
	perimeter=2*(w+x);
	printf("The area and the perimeter of a rectangle is %f and %f\n",area,perimeter);
	//tenth Question
	int y,z;
	int a1=1;
	printf("Enter the number for the multiplication table : ");
	scanf("%d",&y);
	printf("Enter the range for the multiplication table : ");
	scanf("%d",&z);
	while(a1<=z)
	{
		printf("%d * %d = %d\n",y,a1,y*a1);
		a1++;
	}
	//11th question
	int b1;
    printf("Enter any number : ");
    scanf("%d",&b1);
    if(b1==0)
    {
    	printf("The entered number is 0\n");
	}
	else if(b1<0)
	{
		printf("The entered number is negative\n");
	}
	else
	    printf("The entered number is positive\n");
	printf("Now, we are going to perform same problem by using nested-if\n");
	int c1;
    printf("Enter any number : ");
    scanf("%d",&c1);
    if(c1<=0)
    {
    	if(c1==0)
    	printf("Entered number is equal to zero");
    	else
    	printf("Entered number is negative");
	}
	else
	printf("Enetred number is positive");
	//12th Question
	int d1,e1,f1;
	printf("Enter a number to check whether the given number is odd or even : ");
	scanf("%d",&d1);
	if(d1%2==0)
	printf("Entered number is even\n");
	else
	printf("Entered number is odd\n");
	//12(b) Question
	int ll4,ul4;
	printf("Enter the lower range to print even numbers : ");
	scanf("%d",&ll4);
	printf("Enter the upper range to print even numbers : ");
	scanf("%d",&ul4);
	while(ll4<=ul4)
	{
	if(ll4%2==0)
	{
	printf("The even number in the range are %d\n",ll4);
    }
	ll4++;
    }
 	int ll2,ul2;
	printf("Enter the lower range to print even numbers : ");
	scanf("%d",&ll2);
	printf("Enter the upper range to print even numbers : ");
	scanf("%d",&ul2);
	while(ll2<=ul2)
	{
	if(ll2-(2*(ll2/2))==0)
	{
	printf("The even number in the range are %d\n",ll2);
    }
	ll2++;
    }
	int ll3,ul3;
	printf("Enter the lower range to print even numbers : ");
	scanf("%d",&ll3);
	printf("Enter the upper range to print even numbers : ");
	scanf("%d",&ul3);	
	while(ll3<=ul3)
	{
	if((ll3^1)==(ll3+1))
	{
	printf("The even number in the range are %d\n",ll3);
    }
	ll3++;
    }
	//13th Question
	char g1;
	printf("Enter a character to check whether consonant or vowel :");
	scanf(" %c",&g1);
	switch(g1)
	{
	case 'A':printf("Entered Alphabet is a vowel");
	break;
	case 'a':printf("Entered Alphabet is a vowel");
	break;
	case 'E':printf("Entered Alphabet is a vowel");
	break;
	case 'e':printf("Entered Alphabet is a vowel");
	break;
   	case 'I':printf("Entered Alphabet is a vowel");
   	break;
   	case 'i':printf("Entered Alphabet is a vowel");
   	break;
   	case 'O':printf("Entered Alphabet is a vowel");
   	break;
   	case 'o':printf("Entered Alphabet is a vowel");
   	break;
   	case 'U':printf("Entered Alphabet is a vowel");
   	break;
   	case 'u':printf("Entered Alphabet is a vowel");
   	break;
   	default : printf("The entered alphabet is consonant");
   }
   	char h1;
	printf("Enter a character to check whether consonant or vowel :");
	scanf(" %c",&h1);
	if(h1=='A'||'a')
	printf("Entered Alphabet is a vowel");
	else if(h1=='E'||'e')
	printf("Entered Alphabet is a vowel");
	else if(h1=='I'||'i')
	printf("Entered Alphabet is a vowel");
	else if(h1=='O'||'o')
	printf("Entered Alphabet is a vowel");
	else if(h1=='U'||'u')
	printf("Entered Alphabet is a vowel");
	else
	printf("The entered alphabet is consonant");
	char i1;
	printf("Enter a character to check whether consonant or vowel :");
	scanf(" %c",&i1);
	if(i1=='A'||'a'||'E'||'e'||'I'||'i'||'O'||'o'||'U'||'u')
	printf("Entered Alphabet is a vowel");
	else
	printf("The entered alphabet is consonant");
	//14th Question
	int j1,k1,l1;
	printf("Enter any number :");
	scanf("%d",&j1);
	printf("Enter any number :");
	scanf("%d",&k1);
	printf("Enter any number :");
	scanf("%d",&l1);
	if(j1<k1)
	{
		if(k1<l1)
		printf("Third number is greater");
		else
		printf("Second number is graeter");
	}
	else if(j1<l1)
	printf("Third number is greater");
	else
	printf("First number is greater");
	//15th Question
	int m1;
	int sum=0;
	int upper_range1,lower_range1;
	printf("Enter the lower range to print the prime numbers :");
	scanf("%d",&lower_range1);
    printf("Enter the upper range to print the prime numbers :");
	scanf("%d",&upper_range1);
	while(lower_range1<=upper_range1)
	{
		m1=1;
		int count2=0;
	    while(m1<=lower_range1)
	    {
	    	if(lower_range1%m1==0)
	    	{
	    		count2=count2+1;
			}
	    	m1++;
		}
       	if(count2==2)
       	{
    	  sum=sum+lower_range1;
        }
    	lower_range1++;
	}
	printf("The sum of the prime numbers is %d",sum);
	//16th Question
	int n1,o1,num10;
	int sum=0;
	printf("Enter the number to check the palindrome :");
	scanf("%d",&n1);
	num10=n1;
	while(n1>0)
	{
		o1=n1%10;
		sum=sum*10+o1;
		n1=n1/10;
	}
	if(sum==num10)
	printf("The entered number is palindrome");
	else
	printf("The entered number is not palindrome");
	//17th Question
	int p1,q1,r1,s1;
	int count2=0;
	int sum=0;
	printf("Enter any number to check the armstrong number : ");
	scanf("%d",&p1);
	r1=p1;
	s1=p1;
	while(p1!=0)
	{
		p1=p1/10;
		count2++;
	}
	while(r1>0)
	{
		q1=r1%10;
		sum=sum+pow(q1,count2);
		r1=r1/10;
	}
	if(s1==sum)
	printf("The entered number is armstrong number");
	else
	printf("The entered number is not armstrong number");
	//18th Question
	int t1,u1;
	int v1=1;
	printf("Enter the range of the factorial : ");
	scanf("%d",&t1);
	for(u1=1;u1<=t1;u1++)
	{
		v1=v1*u1;
	}
	printf("The factorial of the given range is %d",v1);
	//19th Question
	int w1,x1,y1,a1;
	int z1=1;
	printf("Enter the range for the fabinocci series : ");
	scanf("%d",&w1);
	x1=0;
	y1=1;
	printf("%d,",x1);
	printf("%d,",y1);
	while(z1<=w1-2)
	{
	 a1=x1+y1;
	 printf("%d,",a1);
	 x1=y1;
	 y1=a1;	
	 z1=z1+1;
	}
	//20th Question
	int b1,c1;
	int sum2=0;
	printf("Enter a number to get reversed:");
	scanf("%d",&b1);
	while(b1>0)
	{
		c1=b1%10;
		sum2=sum2*10+c1;
		b1=b1/10;
	}
	printf("The reverse of the entered number is %d",sum2);*/
	//21th Question
	int c1,d1,num11;
	int ll,ul;
	printf("Enter the lower range to print the palindrome numbers :");
	scanf("%d",&ll);
	printf("Enter the upper range to print the palindrome numbers :");
	scanf("%d",&ul);	
	while(ll<ul)
	{
		num11=ll;
		int sum3=0;
		while(num11!=0)
		{
			c1=num11%10;
			sum3=sum3*10+c1;
			num11=num11/10;
		}
		if(sum3==ll)
		printf("The palindrome number is %d\n",sum3);
		ll++;
	}
/*	//23rd question
	int f1,g1,h1;
	int sum5=0;
	int count5=0;
	begin:
	{
		printf("Enter a number to print the sum and average : ");
		scanf("%d",&g1);
		sum5=sum5+g1;
		count5=count5+1;
    }
	printf("Do you wish to continue['0' to exit ;'1' to continue] : ");
	scanf("%d",&h1);
	if(h1==1)
	goto begin;
	if(h1==0);
	{
	printf("You have successfuly exit the program\n");
    }
	printf("The sum snd average upto given numbers are %d and %d",sum5,sum5/count5);
	//25th Question
	int k1,l1;
	int count6=0;
	int isprime=1;
	printf("Enter the a number to check wheater prime or not :");
	scanf("%d",&k1);
	l1=2;
	while(l1<k1)
	{
		if(k1%l1==0)
		{
		isprime=0;
		break;
    }
    l1++;
	}
	if(isprime==1)
	{
		printf("The entered number is prime");
	}
	else
	printf("The entered number is not a prime");
	//22nd Question
   int n;
   int i,j;
   printf("Enter the height of the letter N : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	for(j=0;j<=n;j++)
   	{
   		if(j==0||j==i||j==n)
   		printf("*");
   		else
   		printf(" ");
	   }
	   printf("\n");
   }
   //24th Question
	int i1,j1,k1,l1;
	int count10=0;
	int count11=0;
	int count12=0;
	int count13=0;
    int count14=0;
    int count15=0;
    int count16=0;
    int count17=0;
    int count18=0;
    int count19=0;
    int count20=0;
	printf("Enter the number to get spilted : ");
	scanf("%d",&i1);
	while(i1!=0)
	{
		j1=i1%10;
		printf("%d,",j1);
		count10=count10+1;
		if(j1==1)
		{
		count11++;	
		}
		else if(j1==2)
		{
		count12++;	
		}
		else if(j1==3)
		{
		count13++;	
		}
		else if(j1==4)
		{
		count14++;	
		}
		else if(j1==5)
		{
		count15++;	
		}
		else if(j1==6)
		{
		count16++;	
		}
		else if(j1==7)
		{
		count17++;	
		}
		else if(j1==8)
		{
		count18++;	
		}
		else if(j1==9)
		{
		count19++;	
		}
		else if(j1==0)
		{
		count20++;	
		}
		i1=i1/10;
	}
	printf("\n");
	printf("The repeated numbers are :-\n");
	if(count11>1)
	printf("The no of times 1 number repeated is %d\n",count11);
    if(count12>1)
	printf("The no of times 2 number repeated is %d\n",count12);
	if(count13>1)
	printf("The no of times 3 number repeated is %d\n",count13);
	if(count14>1)
	printf("The no of times 4 number repeated is %d\n",count14);
    if(count15>1)
	printf("The no of times 5 number repeated is %d\n",count15);
	if(count16>1)
	printf("The no of times 6 number repeated is %d\n",count16);
	if(count17>1)
	printf("The no of times 7 number repeated is %d\n",count17);
	if(count18>1)
	printf("The no of times 8 number repeated is %d\n",count18);
	if(count19>1)
	printf("The no of times 9 number repeated is %d\n",count19);
	if(count20>1)
	printf("The no of times 0 number repeated is %d\n",count20);*/
}

//C_LAB-02
#include <stdio.h>
int main()
{
	//first Question
	int a=11,b=6,c=0,d=7,e=5;
    int f;
    f=a+2>b&&!c||a!=2&&a-2<=e;
    printf("The value of this expression a+2>b&&!c||a!=2&&a-2<=e is %d\n",f);
    //second question
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    n==0 ? printf("The entered number is 0\n") : n<0 ? printf("The entered number is negative\n") : printf("The entered number is positive\n");
    //other method for second question
    int k;
    printf("Enter any number : ");
    scanf("%d",&k);
    if(k==0)
    {
    	printf("The entered number is 0\n");
	}
	else if(k<0)
	{
		printf("The entered number is negative\n");
	}
	else
	    printf("The entered number is positive\n");
    //third question
    int i,i1,j,j1;
    int x,y,z,w;
    printf("Enter any number for increment : ");
    scanf("%d",&i);
    printf("Enter any number for decrement : ");
    scanf("%d",&j);
    i1=i;
    j1=j;
    x=i++;
    y=++i1;
    z=j--;
    w=--j1;
    printf("The post increment of the given value is %d\n",x);
    printf("The pre increment of the given value is %d\n",y);
    printf("The post decrement of the given value is %d\n",z);
    printf("The pre increment of the given value is %d\n",w);
    //fourth question
    int s,s2,s3,s4,s5;
    printf("Enter any value to compare the assignment operators : ");
    scanf("%d",&s);
    s2=s;
    s3=s;
    s4=s;
    s5=s;
    printf("The assignment operations are ");
    printf("%d += 2 is %d\n",s,s2+=2);
    printf("%d -= 2 is %d\n",s,s3-=2);
    printf("%d *= 2 is %d\n",s,s4*=2);
    printf("%d /= 2 is %d\n",s,s5/=2);
    //fifth question
    int t,r;
    printf("Enter any number to perform bitwise operation : ");
    scanf("%d",&t);
    printf("Enter any number to perform bitwise operation : ");
    scanf("%d",&r);
    printf("The bitwise operations are \n");
    printf("%d & %d is %d\n",t,r,t&r);
    printf("%d | %d is %d\n",t,r,t|r);
    printf("%d ^ %d is %d\n",t,r,t^r);
    printf("%d << %d is %d\n",t,r,t<<r);
    printf("%d >> %d is %d\n",t,r,t>>r);
    //sixth question
    int p,o;
    printf("Enter any number to perform logical operation : ");
    scanf("%d",&p);
    printf("Enter any number to perform logical operation : ");
    scanf("%d",&o);
    printf("The logical operations are \n");
    printf("%d && %d is %d\n",p,o,p&&o);
    printf("%d || %d is %d\n",p,o,p||o);
    printf("!%d is %d\n",p,!p);
     //seventh question
    int q,m;
    printf("Enter any number to perform relational operation : ");
    scanf("%d",&q);
    printf("Enter any number to perform relational operation : ");
    scanf("%d",&m);
    printf("The relational operations are \n");
    printf("%d == %d is %d\n",q,m,q==m);
    printf("%d != %d is %d\n",q,m,q!=m);
    printf("%d < %d is %d\n",q,m,q<m);
    printf("%d > %d is %d\n",q,m,q>m);
    printf("%d <= %d is %d\n",q,m,q<=m);
    printf("%d >= %d is %d\n",q,m,q>=m);
    //eighth question
    int v,g;
    printf("Enter the value ot a:");
    scanf("%d",&v);
	printf("Enter the value of b:");
	scanf("%d",&g);
	printf("The addition of %d and %d is %d\n",v,g,v+g);
	printf("The substraction of %d and %d is %d\n",v,g,v-g);
	printf("The multiplication of %d and %d is %d\n",v,g,v*g);
	printf("The division of %d and %d is %d\n",v,g,v/g);
	printf("The remainder of %d and %d is %d\n",v,g,v%g);
}

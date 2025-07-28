#include <stdio.h>
int main()
{
	float a,b,r;
	int num1,num2,c;
	int num3,num4;
	const float pie=3.14;
	printf("My Name is Neeraj Bobbadhi\nMy ID No is N220622\n");
    printf("Enter the value ot a:");
    scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("The addition of %f and %f is %f\n",a,b,a+b);
	printf("The substraction of %f and %f is %f\n",a,b,a-b);
	printf("The multiplication of %f and %f is %f\n",a,b,a*b);
	printf("THe division of %f and %f is %f\n",a,b,a/b);
	printf("The remainder of %f and %f is %f\n",a,b,fmod(b,a));
	printf("The size of the int datatype is %d\n:",sizeof(int));
	printf("THe size of the float datatype is %d\n",sizeof(float));
	printf("The size of the character datatype is %d\n",sizeof(char));
	printf("The size of the doube datatype is %d\n",sizeof(double));
    printf("Enter the number that wants to be swapped:");
	scanf("%d",&num1);
	printf("Enter the number that wants to be swapped with:");
	scanf("%d",&num2);
	c=num1;
	num1=num2;
	num2=c;
	printf("The swapped numbers are %d and %d\n",num1,num2);
	printf("Enter the number to be swapped without the third variable:");
	scanf("%d",&num3);
	printf("Enter the number to be swapped with without using third variable:");
	scanf("%d",&num4);
	num3=num3+num4;
	num4=num3-num4;
	num3=num3-num4;
	printf("The swapped numbers are %d and %d\n",num3,num4);
	float area;
	printf("Enter the radius of a circle to find the area:");
	scanf("%f",&r);
	area=pie*r*r;
	printf("The area of the given circle is %f",area);
	/*printf("Enter any number:");
	scanf("%d",&a);
	printf("%d\n",a);
	printf("I ve observed that the short only ranges from 0 to 65535. it only takes integer values. if we enter other than integer we get floor value of that number");
	printf("Enter any number:");
	scanf("%f",&a);
	printf("%f\n",a);*/
}

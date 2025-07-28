#include<stdio.h>
#include<math.h>
int main()
{ 
    /*// 1..print your id number
    //  printf("id no is N220556");

    //2..check whether the entered age is 18 or not(if age>18 eligible for voting)
    //int a;
    // printf("enter your age :");
    //scanf("%d",&a);
    // if (a>=18){
    //     printf("your are eligible for cast your vote as per given details");
    // }
    // else
    // printf("you are not eligible for voting");
    */
    //3..add,sub,mult,division 
    //a)using else-if labber
//     int a,b;
//     char o;
//     printf("enter the value of 1st num :");
//     scanf("%d",&a);
//     printf("enter the value of 2nd num :");
//     scanf("%d",&b);
//     printf("enter the operation(+,-,/,*,%%):");
//     scanf(" %c",&o);
// //     if(o=='+')printf("%d+%d=%d",a,b,a+b);
// //     else if(o=='+')printf("%d+%d=%d",a,b,a+b);
// //     else if(o=='-')printf("%d-%d=%d",a,b,a-b);
// //     else if(o=='*')printf("%d*%d=%d",a,b,a*b);
// //     else if(o=='/')printf("%d/%d=%d",a,b,a/b);
// //     else if(o=='%')printf("%d%%%d=%d",a,b,a%b);
// //     else printf("enter the vaild operation");

// //switch case
// switch (o)
// {
// case'+':
// printf("%d+%d=%d",a,b,a+b);
//     break;
// case'-':
// printf("%d-%d=%d",a,b,a-b);
//     break;
// case'*':
// printf("%d*%d=%d",a,b,a*b);
//     break;
// case'/':
// printf("%d/%d=%d",a,b,a/b);
//     break;
// case'%':
// printf("%d%%%d=%d",a,b,a%b);
//     break;
// default:
// printf("enter a vaid operation");
//     break;
// }

// // 4..implement the calculator using loops ,has to repeat the calculations untill user wishes to exit
// //  the application.
// int a,b,cond;
// char o;
// cond=1;
// printf ("welcome to raj calculator \n");
// while(cond){
//     printf("enter the value of 1st num :");
//     scanf("%d",&a);
//     printf("enter the value of 2nd num :");
//     scanf("%d",&b);
//     printf("enter the operation(+,-,/,*,%%):");
//     scanf(" %c",&o);
//       if(o=='+')printf("%d+%d=%d",a,b,a+b);
//     else if(o=='+')printf("%d+%d=%d",a,b,a+b);
//     else if(o=='-')printf("%d-%d=%d",a,b,a-b);
//     else if(o=='*')printf("%d*%d=%d",a,b,a*b);
//     else if(o=='/')printf("%d/%d=%d",a,b,a/b);
//     else if(o=='%')printf("%d%%%d=%d",a,b,a%b);
//     else printf("enter the vaild operation");
    
//     printf("\nDo you wish to continue?\n");
//     printf("press 1 for continue...\n");
//     printf("press 0 for exist...\n");
//     printf("input :");
//     scanf("%d",&cond);
//     }
//     printf("thanks for using our calculator");

// //5..fahrenheit to celsius
//   float a,c,f;    
//     printf("What do you want? ");
//     printf("\n enter 1 for  celsius to fahrenheit...");
//     printf("\n enter 2 for  fahrenheit to celsius ...");
//     printf("\n input :");
//     scanf("%f",&a);
//     if (a==1){
//         printf("Enter the celsius :");
//         scanf("%f",&c);
//         float cf=((c*(9.0/5))+32);
//         printf("fahrenheit for %f c is %f f",c,cf);

//     }
//     else if (a==2){
//         printf("Enter the fahrenheit :");
//         scanf("%f",&f);
//         float fc=(f-32)*5/9;
//         printf("celsius for %f f is %f c",f,fc);
 // }

 //6..swapping of numbers
//  int a,b,c;
//     printf("enter the num1 :");
//     scanf("%d",&a);
//     printf("enter the num2 :");
//     scanf("%d",&b);
//     printf(" num1=%d \n num2=%d",a,b);
//     //with third variable
//     c=b;
//     b=a;
//     a=c;
//     printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
//     //without third varible 
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
//     //swapping by using *,/
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("\nAfter swapping \n num1=%d \n num2=%d",a,b);
//     //swaping by using XOR ^
//     a=a^b;
//     b=a^b;
//     a=a^b;

// //7..check whether given number is prime or not
//     int n,i,j;
//     int f=0;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(i=2;i<=n;i++){
//         if(n%i==0){
//             f=f+1;
//         }
//     }
//     if(f==1)
//     printf("%d is a prime number",n);
//     else printf("%d is not a prime number",n);

// //8....print prime numbers in given range
// int l,u,i,j;
// int f=0;
// printf("enter the lower range of prime numbers :");
// scanf("%d",&l);
// printf("enter the upper range of prime numbers :");
// scanf("%d",&u);

// for(i=l;i<=u;i++){
//     f=0;
//     for(j=1;j<=i;j++){
//         if(i%j==0){
        
//         f=f+1;}

//     }
//     if(f==2)printf("%d,",i);
// }
// printf("\n these are the prime numbers upto %d to %d",l,u);

// // 10...print the multiplication table for given uber and range
// int i,n,r;
// printf("enter the required multiplication :");
// scanf("%d",&n);
// printf("enter the range of multiplication :");
// scanf("%d",&r);
// for (i=1;i<=r;i++){
//     printf("%d*%d=%d\n",n,i,n*i);
// }

// //11...check whether given number is +ve or -ve
// int n;
// //else if ladder
// printf("enter any number :");
// scanf("%d",&n);
// if(n>0) printf("%d is positive number..",n);
// else if (n<0)printf("%d is negative number..",n);
// else printf("it is zero...");
// //nested if ladder
// if(n<=0){
//     if(n==0)printf("it is zero..");
//     else printf("%d it is negative number..",n);
// }
// else printf("%d it is a positive number..",n);


// // 12...a)given is even or odd
// int  n;
// printf("enter any number :");
// scanf("%d",&n);
//i)using % operator
// if(n%2==0) printf("%d is a even number",n);
// else printf("%d is a odd number",n);

// // using arthimetic operation
// if(n-2*(n/2)==0)printf("%d is even number..",n);
// else printf("%d is odd number..",n);

// //using bitwise operation 
// if((n^1)==(n+1)) printf("%d is a even number",n);
// else printf("%d is odd number..",n);

// //b)print even number between range
// int n,i,l,u; 
// printf("enter the lower limit of range :");
// scanf("%d",&l);
// printf("enter upper limit of the range :");
// scanf("%d",&u);
// for(i=l;i<=u;i++){
//     if(i%2==0)printf("%d ,",i);
// }
// printf("\nthese are the even numbers...between the %d and %d",l,u);

// 13...check whether given charchter is vowel or not
//a) using switch case
// char v;
// printf("enter the single alphabet to check vowel or consonent :");
// scanf("%c",&v);
// switch(v){
//     case 'A' :printf("%c is a vowel",vowel);
//     break;
//     case 'E' :printf("%c is a vowel",vowel);
//     break;
//     case 'I' :printf("%c is a vowel",vowel);
//     break;
//     case 'O' :printf("%c is a vowel",vowel);
//     break;
//     case 'U' :printf("%c is a vowel",vowel);
//     break;
//     case 'a' :printf("%c is a vowel",vowel);
//     break;
//     case 'e' :printf("%c is a vowel",vowel);
//     break;
//     case 'i' :printf("%c is a vowel",vowel);
//     break;
//     case 'o' :printf("%c is a vowel",vowel);
//     break;
//     case 'u' :printf("%c is a vowel",vowel);
//     break;
//     default :printf("%c is a consonent",vowel);
//}

// // //using else if ladder
// if(v=='a'||v=='A'){
//  printf("%c is a vowel",v);}
// else if(v=='e'||v=='E'){
//  printf("%c is a vowel",v);}
// else if(v=='i'||v=='I'){
//  printf("%c is a vowel",v);}
// else if(v=='o'||v=='O'){
//  printf("%c is a vowel",v);}
// else if(v=='u'||v=='U'){
//  printf("%c is a vowel",v);}
// else {
//  printf("%c is a consonent.",v);}

// //using if else statement
// if(v=='a'||v=='A'||v=='e'||v=='E'||'v==i'||v=='I'||v=='o'||v=='O'||v=='u'||v=='U'){
//     printf("%c is a vowel ",vowel);
// }
// else printf("%c is consonent",vowel);

// // 14...print largest among the three numbers
// int n1,n2,n3;
// printf("enter the 1st number :");
// scanf("%d",&n1);
// printf("enter the 2nd number :");
// scanf("%d",&n2);
// printf("enter the 3rd number :");
// scanf("%d",&n3);
// if(n1<n2){
//     if(n2<n3)
//         printf("3rd number is largest..");
//     else
//         printf("2nd number is largest");
// }
// else if (n1<n3)
// {
//     printf("3rd number is largest");
// }
// else
// printf("1st number is largest.");

// // 15...print the sum of prime numbers in given range
// int l,u,i,j;
// int sum=0;
// printf("enter the lower limit :");
// scanf("%d",&l);
// printf("enter the upper limit : ");
// scanf("%d",&u);
// printf("the prime numbers between %d and %d are : ",l,u);
// for(i=l;i<=u;i++){
//     if(i<2)continue;
//     int f=0;
//     for(j=2;j<i;j++){
//         if(i%j==0){
//             f=1;
//             break;
//         }
//     }
//     if(f==0){
//         printf("%d,",i);
//         sum=sum+i;
    
//     }
// }
// printf("\nthe sum of prime numbers are %d",sum);
// }

// //16..check whether the given number is palindrome or not
// int n,i,c;
// int r=0;
// printf("enter the number to check palindrome :");
// scanf("%d",&n);
// int n2=n;
// while(n!=0){
//     c=n%10;
//     r=r*10+c;
//     n=n/10;
// }
// if(n2==r){
//     printf("the given number is palindrome");
// }

// else printf("the given number is not palindrome");

//17..check whether given number is armstrong or not
//ans: armstrong number means a number that is equal to  the su of its digits,each raised to a power
// example: 1^3+5^3+3^3=153
// int n;
// printf("enter number to check armstrong :");
// scanf("%d",&n);
// int n1=n;
// int p=0;
// int a=0;
// while(n!=0){
//     p=p+1;
//     n=n/10;
// }
// n=n1;
// while(n!=0){
//     int c=n%10;
//     a=a+(pow(c,p));
//     n=n/10;
// }
// if(n1==a){
//     printf("%d is an armstrong number",n1);
// }
// else{
//     printf("%d is not an armstrong number",n1);
// }


// // 18....print factorial of given number
// int n;
// printf("enter the number :");
// scanf("%d",&n);
// printf("the factorial of the %d are :",n);
// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         printf("%d,",i);
//     }
// }


// // 19...Fbanoci series upto ......n,where initial values are 0 and 1
// int i,n;
// printf("enter the range of the fbanocci sereies range :");
// scanf("%d",&n);
// int n1=0;
// int n2=1;
// printf("\nfbanocci series of given range : %d,%d,",n1,n2);
// for(i=2;i<n;i++){
//     int n3=n2+n1;
//     n1=n2;
//     n2=n3;
//     printf("%d,",n3);
// }

// //20...reverse of a number
// int n,r;
// r=0;
// printf("enter a number to reverse :");
// scanf("%d",&n);
// int n1=n;
// while(n!=0){
//     int c=n%10;
//     r=r*10+c;
//     n=n/10;
// }
// printf("the reverwse of %d is %d.",n1,r);

// //21...print all palindrome in given range
// int l,u,i,j,n,r,n1;
// printf("enter the lower range :");
// scanf("%d",&l);
// printf("enter the upper range :");
// scanf("%d",&u);
// printf("the palindrome numbers in given range :\n");
// for(i=l;i<=u;i++){
//     r=0;
//     n1=i;
//     n=i;
//     while(n!=0){
//         int c=n%10;
//         r=(r*10)+c;
//         n=n/10;
//     }
//     if(n1==r){
//     printf("%d,",n1);
//     }
// }

// //22....print alphabet in *
// int i,j,k,n;
// printf("printing R using *");
// printf("enter no.of rows you u want :");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++){
//         if(i==1||j==1||j==n||i==n) printf("* ");
//         else printf("  ");
//     }
//     printf("\n");
// }
// for(i=2;i<=n;i++){
//     for(j=1;j<=n;j++){
//         if(j==1||i==j) printf("* ");
//         else printf("  ");
//     }
//     printf("\n");
// }

// //23...print sum and average of all numbers upto user wish stop to entering numbers
// int n;
// int c=1;
// int sum=0;
// float avg=0;
// float len=0;
// while(c){
//     printf("enter digit to calculate :");
//     scanf("%d",&n);
//     sum=sum+n;
//     len=len+1;
//     avg=sum/len;
//     printf("Do you wish to continue?\nprees 1 to continue...\npress 0 to exist and give output...\ninput:");
// scanf("%d",&c);
// }
// printf("sum of input:%d\naverage of input:%f",sum,avg);

//24...a)split into digits
//     b)count total no.of digits
//     c)total no.of duplicates 
//     d)how many times a each number duplicatecd
int n,i,j,d,k;
printf("enter a number to check :");
scanf("%d",&n);
int n1=n;
int len=0;
printf("the digits in a number %d:",n);
while(n!=0){
    d=n%10;
    len=len+1;
    printf("%d,",d);
    n=n/10;
}
printf("\n%d digits to given number %d..",len,n1);
n=n1;k=0;
int arr[len];
for(i=0;i<len;i++){
    arr[i]=n%10;
}
for(i=0;i<len-1;i++){
    for(j=0;j<len-1-i;j++){
        if(arr[j]==arr[j+1]){
            k=k+1;
        }
    }
}
printf("\nNo.of duplicates in %d is : %d",n1,k);


// //25...check whether given is prime or not using break;
// int n;
// int i=2;
// printf("enter any number :");
// scanf("%d",&n);int f=0;
// int f=0;
// while(n>i){
//     if(n%i==0){
//         f=f+1;
//         break;
//     }
//     i++;
// }
// if(f==1) printf("entered number is not a prime");
// else printf("it is a prime number");










}










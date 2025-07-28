#include<stdio.h>
// functions , call by value and  call by reference 
// passing an array to a function 
// function declaration 
 int addition(  int [] , int  ); // array , len
 
 int addition( int b[], int n)
 {
    int i , s=0;
    for ( i =0; i<n ;i++)
      s = s+b[i];
  return s;
 }

void main()
{
        int arr[5] ={12,23,45,67,89};
        int sum;
        sum = addition ( arr, 5); // fun_name(base of address of array, len)
        printf( " sum of the array is %d ", sum);

}

#include<stdio.h>
// functions , call by value and  call by reference 
// passing an array to a function 
// function declaration 
void addition(  int [] , int  ); // array , len
 // passing to a function comes under call by reference 
 void addition( int b[], int n)
 {
    b[2] = 121; 
 }

void main()
{
        int arr[5] ={12,23,45,67,89};
        int sum;
        addition ( arr, 5); // fun_name(base of address of array, len)
        printf( "  %d ",arr[2]);

}

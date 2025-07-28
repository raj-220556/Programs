#include<stdio.h>
int main()
{
  int a = 100, b =200; // 1000 -- a -- 100
  int *ptr1 , *ptr2 ;  //  
  ptr1 = &a ;
  ptr2 = &b;
  
  printf("    %u     ", ptr1  -  ptr2); // addition, multiplication , division  of two pointers is invailid 
                                                            // subtraction is valid 
  }
  

#include<stdio.h>
int main()
{

  int a = 100; // 1000 -- a -- 100
  int *ptr ;  //  
  ptr = &a ;
  printf(" %u  ", ptr); 
  printf(" %d  ", *ptr); 
   
  ptr = ptr  / 7;   // 1000 + sizeof(int ) * 7 // addition and subtraction  with a number is allowed , multiplication and division invalid
  printf(" %u  ", ptr); 
  printf(" %d  ", *ptr); 
  }

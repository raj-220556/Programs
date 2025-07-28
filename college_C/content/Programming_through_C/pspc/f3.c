#include<stdio.h>

int mystrlen( char []);

int mystrlen( char s1[])
{
      int i =0;
      while(s1[i] != '\0')
        i++;
      return i;

}

void  main()
{ 
    char str[30];
    scanf("%s", str);
    int len;
    len = mystrlen(str); // only base address of array is sent, length is not present in the parameter list 
    printf (" length of the string %d  \n", len); 
}

// one dimesion array -- 
// double dimensional array to a function 

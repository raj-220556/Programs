#include<stdio.h>
int main()
{
char *cptr;
int *iptr;
float *fptr;
double *dptr;
printf("\n The size of character pointer is: %ld ",sizeof(cptr));
printf("\n The size of integer pointer is: %ld ",sizeof(iptr));
printf("\n The size of float pointer is: %ld ",sizeof(fptr));
printf("\n The size of double pointer is: %ld ",sizeof(dptr));
return 0;
}

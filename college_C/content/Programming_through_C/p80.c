#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int *ptr;
	 ptr=      (int *) calloc( n,sizeof(int)); //malloc(n*sizeof(int));
	if (ptr == NULL)
		printf(" allocation is unsuccessful");
	else
		printf(" success ");
	int i;
	for (i=0; i<n;i++)
		printf(" %d \n", ptr[i]); // *(1000 + i*4)
	free(ptr);
}

#include<stdio.h>
int main()
{
	int i = 1;
	
	while( i <=10)
	{
		
		
		if (i== 5){
			continue;}
		printf("%d \n",i);
		i++;	
	}

}


	/* continue and break
	
	break :  if the condition satisfies break will come out from the immediate loop
	
	continue : if the condition satisfies continue will omit the remaining portion of the loop and starts the next iteration
*/

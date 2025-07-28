#include<stdio.h>
// self - referential structure
struct Node
{

	int info;
	struct Node *next; 	
};

void main()
{
	struct Node n1, n2, n3,n4;
	n1.info = 10;
	n2.info = 20;
	n3.info = 30; 
	n4.info = 40;
	
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = NULL;
	
	struct Node *ptr = &n1;
	
	while ( ptr!= NULL)
	{
		printf(" %d----> ", ptr->info);
		ptr = ptr->next;
	
	}
	
	
	
	
	
	
	

}

#include<stdio.h>
#include<string.h>

struct player{
	int jno;
	char name[20];
	float strikerate;
	int matches;
};

typedef struct player PLAYER;
void main()
{

	PLAYER p1 ; // =  { 7,"dhoni", 107, 300}      ; // p1 is structure variable 
	// dot operator  structurevaraible.membername
	p1.jno = 7;
	strcpy( p1.name , "dhoni");
	p1.strikerate = 107;
	p1.matches = 300;
	
	
	printf("%d %s %f %d", p1.jno, p1.name, p1.strikerate, p1.matches);	
		
	
}



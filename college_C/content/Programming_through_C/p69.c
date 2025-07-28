#include<stdio.h>


struct player{
	int jno;
	char name[20];
	float strikerate;
	int matches;
};

typedef struct player PLAYER;
void main()
{

	PLAYER p1;
	printf(" enter thevalue of player jno name strate matches ");
	scanf("%d%s%f%d", &p1.jno, p1.name , &p1.strikerate,&p1.matches);
	printf(" values entered are ");
	printf("%d %s %f %d", p1.jno, p1.name, p1.strikerate, p1.matches);	
}
	
	
	
	
	
	

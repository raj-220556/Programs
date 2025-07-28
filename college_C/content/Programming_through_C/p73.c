#include<stdio.h>
struct player{
	int jno;
	char name[20];
	float strikerate;
};

typedef struct player PLAYER;
// structures and functions
void printstruct(   PLAYER  );

void main()
{
		PLAYER p = { 12,"ram", 89};
		printstruct(p);

}
void printstruct( PLAYER q)
{
	printf(" %d %s %f", q.jno, q.name, q.strikerate);

}




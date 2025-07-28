#include<stdio.h>
struct player{
	int jno;
	char name[20];
	float strikerate;
};

typedef struct player PLAYER;
void main()
{
	PLAYER p = { 12,"ram", 89};
	PLAYER *ptr ;
	ptr = &p;
	printf(" %d %s %f ", (*ptr).jno, (*ptr).name, (*ptr).strikerate);
	printf("%d %s %f ",ptr->jno,ptr->name,ptr->strikerate);
}



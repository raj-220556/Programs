#include<stdio.h>
struct date
{
	int day;
	char mon[10];
	int year;
};

struct player{
	int jno;
	char name[20];
	struct date dob;
	float strikerate;
	int matches;
};

typedef struct player PLAYER;
void main()
{

	PLAYER p1 = { 45, "rohit", 30, "april", 1987, 140 , 330}  ;
	printf(" %d %s %d-%s-%d, %f %d", p1.jno, p1.name, p1.dob.day, p1.dob.mon, p1.dob.year, p1.strikerate,p1.matches);
	
}
	
	
	
	
	

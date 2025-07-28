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
	PLAYER p[3];
	int i;
	for ( i =0; i<3 ;i++)
	{
		printf(" enter of the details of %d player ", i);
		scanf("%d%s%f%d", &p[i].jno, p[i].name, &p[i].strikerate, &p[i].matches);
	
	}
	int index = 0;
	float temp = p[0].strikerate;
	for ( i = 1;i<3;i++)
	{
		if ( temp < p[i].strikerate)
		{
			index= i;
			temp = p[i].strikerate;
		}
	}		
	printf(" the name of player with highest strikerate is %s ", p[index].name);			

}

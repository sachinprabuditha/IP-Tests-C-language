#include<stdio.h>
int main(void)
{
	int players, rounds, i, j;
	float avg, total;
	
	printf("How many players are in the race: ");
	scanf("%d", &players);
	
	for (i=1;i <= players; i++)
	{
		printf("Enter the scores of player %d(between 0-7)\n", i);
		
			for(j=1; j<=2; j++)
			{
				printf("\tround %d- ",j);
				scanf("%d", &rounds);
				
				total += (float)rounds;
				
			}
	avg= total/2;
	printf("\taverage score- %.1f\n\n", avg);
	}
		
return 0;	
}

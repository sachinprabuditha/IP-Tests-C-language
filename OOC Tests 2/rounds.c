#include <stdio.h>
int main(void)
{
	int round, i=1, j;
	float avg,total;
	char cont;
	
	do{
		printf("Enter the scores of player %d(between 0-8)\n", i);
		
		for(j=1; j<=5 ; j++){
			printf("\tround %d - ", j);
			scanf("%d", &round);
			
			total += (float)round;
		}
		
		avg = total/5;
		
		printf("average score - %.1f\n",avg);
		
		printf("\nDo you want to enter the scores of another player(y/n)? ");
	    scanf(" %c", &cont);
	    i++; 
	}
	while(cont =='y' || cont =='Y');
	
return 0;	
}

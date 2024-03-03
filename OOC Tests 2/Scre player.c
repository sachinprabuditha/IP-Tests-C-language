#include<stdio.h>
int main(void)
{
	int round, i=1, j=1;
	float avg, total;
	char cont;
	
	printf("Enter the sores of player %d(between 0-8)\n",j);
	
	while(i<=5){
	printf("round %d- ", i);
	scanf("%d", &round);
	i++;	

	total += i;
	avg = total/5;
	
	printf("average score: %.2f\n", avg);
	
	printf("Do you want to enter the scores of another player(y/n)?");
	scanf(" %c", &cont);
}
	
	
return 0;	  
}

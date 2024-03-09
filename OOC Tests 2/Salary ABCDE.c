#include<stdio.h>

int findBonusTimes(char empCategory);
float findBonus(float salary, int noOfTimes);

int main(void)
{
	float salary;
	char empNum;
	
	printf("Enter Salary: ");
	scanf("%f", &salary);
	
	printf("Enter employee number: ");
	scanf(" %c", &empNum);
	
	printf("Bonus: %.2f", findBonus(salary, findBonusTimes(empNum)));

return 0;	
}

int findBonusTimes(char empCategory)
{
	switch(empCategory)
	{
		case 'A':
			return 1;
			break;
		case 'B':
			return 2;
			break;
		case 'C':
		case 'D':
		case 'E':	
			return 3;
			break;		
	}
}

float findBonus(float salary, int noOfTimes)
{
	return salary * noOfTimes;
}

#include<stdio.h>

float calcNoOfTimes(int empCategory);
float cacBonus(float salary, float noOfTimes);

int main(void)
{
	int empCategory;
	float salary;
	
	printf("Enter Category: ");
	scanf("%d", &empCategory);
	
	printf("Enter Salary: ");
	scanf("%f", &salary);
	
	printf("Bonus: %.2f", cacBonus(salary, calcNoOfTimes(empCategory)));
	
return 0;	
	
}
float calcNoOfTimes(int empCategory)
{
	switch(empCategory)
	{
		case 1:
			return 1.0;
			break;
		case 2:
			return 1.5;
			break;
		case 3 ... 9:
			return 2.0;
			break;		
	}
}
float cacBonus(float salary, float noOfTimes)
{
	return noOfTimes * salary;
}

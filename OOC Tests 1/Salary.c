#include<stdio.h>
int main (void){
	
	int no_of_months;
	float B_salary, Bonus; //variable declaration
	
	printf("number of months: "); //input Number of Months
	scanf("%d", &no_of_months);
	
	printf("basic salary: "); //input basic salary
	scanf("%f", &B_salary);
		
	if (no_of_months<6){
		printf("Bonus: %.2f", Bonus);
			
	}
	else if (no_of_months==12 || B_salary<= 45000 ){
		Bonus = no_of_months * B_salary + 1*B_salary;
		printf("Bonus: %.2f", Bonus);
}
	else {
		Bonus = no_of_months * B_salary; //calculate the bonus
		printf("Bonus: %.2f", Bonus);
	}

return 0;	
} // end of main function

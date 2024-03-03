#include<stdio.h>
int main(void){
	int nu_of_hours;
	float salary, tax;
	char Emp_category;
	
	printf("Employee category: ");
	scanf(" %c", &Emp_category);
	
	printf("Number of hours: ");
	scanf("%d", &nu_of_hours);
	
	switch(Emp_category){
		case 'A':
			if (salary < 25000){
				salary = 600 *nu_of_hours; 
				tax = 0;
			}
			else if(salary > 50000){
				salary = 600 *nu_of_hours;
				tax = salary * 4/100;
			}
			else if(salary >= 25000){
				salary = 600 *nu_of_hours;
				tax = salary * 2/100;		
			} break;
		case 'B':
			if (salary < 25000){
				salary = 450 *nu_of_hours; 
				tax = 0;
			}
			else if(salary > 50000){
				salary = 450 *nu_of_hours;
				tax = salary * 4/100;
			}
			else if(salary >= 25000){
				salary = 450 *nu_of_hours;
				tax = salary * 2/100;		
			} break;
		case 'c':
			if (salary < 25000){
				salary = 300 *nu_of_hours; 
				tax = 0;
			}
			else if(salary > 50000){
				salary = 300 *nu_of_hours;
				tax = salary * 4/100;
			}
			else if(salary >= 25000){
				salary = 300 *nu_of_hours;
				tax = salary * 2/100;		
			} break;		
		default : printf("Invalid Employer category");	
	}
	
	printf("Salary: %.2f", salary);
	printf("Tax: %.2f", tax);
	
	return 0;
}

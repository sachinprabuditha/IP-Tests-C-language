#include<stdio.h>
int main(void){
	
	int no_of_hours;
	float salary, tax;
	char Emp_category;
	
	printf("Employee category: ");
	scanf(" %c", &Emp_category);
	
	printf("Number of hours: ");
	scanf("%d", &no_of_hours);
	
	
	switch(Emp_category){
		case 'A':
			salary = 600*no_of_hours;
			break;
		case 'B':
			salary = 450*no_of_hours;
			break;
		case 'C':
			salary = 300*no_of_hours;
			break;
		default: printf("Invalid employee category");			
	}
	printf("Salary: %.2f", salary);
	if (salary<25000){
		tax=0;
	}
	else if (salary>=25000){
		tax= salary* 2/100;
	}
	if (salary>50000){
		tax= salary * 4/100;
	}
    printf("\nTax: %.2f", tax);
    
    return 0;
}

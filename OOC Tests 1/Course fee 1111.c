#include<stdio.h>
int main(void){ //start main function
	int Course_no, Apt_test_marks; //variable declaration
	float discount, course_fee; //variable declaration
	
	printf("Course No: ");
	scanf("%d", &Course_no); //read course number
	
	printf("Aptitude test marks: ");
	scanf("%d", &Apt_test_marks); //read aptitude test marks
	
	switch(Course_no){ // open switch case
		case 1:
			if (Apt_test_marks<100 && Apt_test_marks>=80){ // check whether marks are in between 80-100
				discount = 150000* 7.5/100; //calculate discount
				course_fee = discount+ 150000; //calculate course fee
			}
			else{
				discount = 0;
				course_fee = discount + 150000;
			} break;
		case 2:
			if (Apt_test_marks<100 && Apt_test_marks>=80){
				discount = 175000* 7.5/100;
				course_fee = discount+ course_fee;
			}
			else{
				discount = 0;
				course_fee = discount + 175000;
			} break;
		default: printf("Invalid Course Number");		
	} //end of switch case
	
	printf("Discount: %.2f", discount); //Print the discount
	printf("Course fee: %.2f", course_fee); //Print the course fee
	
	return 0;
} //end of main function

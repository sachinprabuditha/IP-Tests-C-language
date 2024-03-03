#include<stdio.h>
int main(void){
	char CourseType, CourseName;
	float regfee, total1=0, total2=0, total3=0, finalamount;
	int count1=0, count2=0, count3=0, totalNoOfReg=1;	
	
	while(totalNoOfReg <= 3){
		
	printf("Enter the course Type(H,M,F): ");
	scanf(" %c", &CourseType);
	
	if(CourseType=='s'){
		break;
	}	
		
		switch (CourseType){
			case 'H' :
			case 'h' : 
			    total1= total1 + 1500.00;
			    count1= count1+1;
				break;
			case 'M' :
			case 'm' : 
			    total2= total2 + 2000.00;
			    count2= count2+1;
				break;
			case 'F' :
			case 'f' : 
			    total3= total3 + 2500.00;
			    count3= count3+1;
				break;	
			default : printf("Invalid Course Type \n");		   
		}
		
		totalNoOfReg++;
	}
		
	printf("Diploma in Hospital Management Amount(Rs.): %.2f \n", total1);
	printf("Diploma in Marketing Amount(Rs.): %.2f \n", total2);
	printf("Diploma in Finance Amount(Rs.): %.2f \n", total3);
	printf("cound %d",count1);
	
return 0;	
}

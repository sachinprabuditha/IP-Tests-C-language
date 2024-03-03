#include<stdio.h>
int main(void){ //start main function
	int Cu_Type, No_of_Units; //variable declaration
	float Mon_Charge, First100_Charge; //variable declaration
	
	printf("Customer Type: ");
	scanf("%d", &Cu_Type); //Read Customer Type
	
	printf("Number of units: ");
	scanf("%d", &No_of_Units); //Read number of units
	
	switch (Cu_Type){ //start switch case
		case 1:
			if(No_of_Units<= 100){ //check number of units less than or equal to 100
				Mon_Charge= No_of_Units*10; //calculate monthly charge
			}
			else{
				Mon_Charge= 100*10 + (No_of_Units-100)*30;
				Mon_Charge = Mon_Charge+ Mon_Charge*20/100;
			}
	break;
	    case 2:
		    if(No_of_Units<= 100){ //check number of units
				Mon_Charge= No_of_Units*10; //calculate monthly charge
			}
			else{
			
				Mon_Charge= 100*10 + (No_of_Units-100)*30;
			}break;
			default: printf("Invalid Customer Type");
	}
	printf("Monthly charge: Rs. %.2f", Mon_Charge); //Display Monthly charge
	
	return 0;
}//end of main functon

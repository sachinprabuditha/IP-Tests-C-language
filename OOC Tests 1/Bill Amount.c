#include<stdio.h>
int main(void){
	int CuType;
	float BAmount ,DAmount, total=0; //end of variable declaration
	
	printf("Customer Type: ");
	scanf("%d", &CuType);
	
	printf("Bill Amount: ");
	scanf("%f", &BAmount);
	
	switch(CuType){ //open switch case
	  case 1:	
	    if (BAmount <= 2500){
	   	DAmount = BAmount*5/100;
	   	total = BAmount- DAmount;
	   	   printf("Discount Amount: Rs. %.2f", DAmount);
		   printf("\nFinal Bill amount: Rs. %.2f",total); 
	}
	   	else{
	   	DAmount = BAmount*10/100;
	   	total = BAmount- DAmount;
	   	   printf("Discount Amount: Rs. %.2f", DAmount);
		   printf("\nFinal Bill amount: Rs. %.2f",total);
		   }break;
		case 2:	
	    if (BAmount > 5000){
	   	DAmount = BAmount*10/100;
	   	total = BAmount- DAmount;
	   	   printf("Discount Amount: Rs. %.2f", DAmount);
		   printf("\nFinal Bill amount: Rs. %.2f",total); 
	}
	   	else{
	   	DAmount = BAmount;
	   	total = BAmount- DAmount;
	   	   printf("Discount Amount: Rs. %.2f", DAmount);
		   printf("\nFinal Bill amount: Rs. %.2f",total);
		   } break;  
		default:  ("Invalid Customer Type");
		   	
	   } //end switch case
	
	return 0;
}

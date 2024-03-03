#include<stdio.h>
int main(void){
	int cu_type;
	float bill_amount, Dis_amount, FinalBillAmount;
	
	printf("Customer Type: ");
	scanf("%d", &cu_type);
	
	printf("Bill Amount: Rs. ");
	scanf("%f", &bill_amount);
	
	switch(cu_type){
		
		case 1: 
		if (bill_amount<=2000){
		Dis_amount = bill_amount*15/100;
		break;
	}
		else{
		Dis_amount = bill_amount*25/100;
		break;	
			
		}
		
		case 2: 
		if (bill_amount>3000){
		Dis_amount = bill_amount*15/100;
		break;
	}
	
	}
	FinalBillAmount = bill_amount - Dis_amount;
	
	printf("Discount Amount: Rs. %.2f", Dis_amount);
	printf("\nFinal Bill Amount: Rs. %.2f", FinalBillAmount);
	
	return 0;
}

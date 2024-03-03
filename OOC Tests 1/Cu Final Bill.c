#include<stdio.h>
int main(void){
	int Cus_type;
	float Bill_Amount, Discount_Amount, Final_Bill=0;
	
	printf("Customer Type: ");
	scanf("%d", &Cus_type);
	
	printf("Bill Amount: Rs. ");
	scanf("%f", &Bill_Amount);
	
	switch(Cus_type){
		case 1: 
		if(Bill_Amount <= 2500){
			Discount_Amount= Bill_Amount*5/100;
			}
		else{
			Discount_Amount= Bill_Amount*10/100;
		}break;
		
		case 2: 
		if(Bill_Amount> 5000){
			Discount_Amount= Bill_Amount*10/100;	
	    }
	    else{
		    Discount_Amount=Bill_Amount;
	    }break;
	
	default: printf("Invalid Customer Type");
    }
Final_Bill = Bill_Amount - Discount_Amount; 
   printf("Discount Amount: Rs. %.2f", Discount_Amount);
   printf("\nFinal Bill Amount: Rs. %.2f", Final_Bill);
   
   return 0;
}

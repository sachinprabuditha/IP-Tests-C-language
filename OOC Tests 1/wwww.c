#include<stdio.h>
int main(void){
	int typeOfRoom, NoOfDays;
	float amount, fullboard, halfboard, discount, fullamount, finalamount;
	char cardtype, accommodationBasis, RewardCardType;
	
	printf("Enter the Type of room: ");
	scanf("%d", &typeOfRoom);
	
	while (typeOfRoom != -1){
		
	/*if(typeOfRoom>3 || typeOfRoom<1)
	printf("Invalid Type of Room");*/
	
	
	printf("Enter Accommodation Basis(F/H): ");
	scanf(" %c", &accommodationBasis);
	
	printf("Enter No Of Days: ");
	scanf("%d", &NoOfDays);
	
	printf("Enter Reward Card Type(G,B,S): ");
	scanf(" %c", &RewardCardType);
		
	switch (typeOfRoom) {
		case 1 : 
		  
	       switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 25555.00;
	       		break;
	       	
			case 'H' :
			   	amount = 17250.00;
			   	break;
			   	
		   } break;
		case 2 : 
		  
	       switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 17500.00;
	       		break;
	       	
			case 'H' :
			   	amount = 12250.00;
			   	break;
			   	
		   } break;
		case 3 : 
		  
	       switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 9000.00;
	       		break;
	       	
			case 'H' :
			   	amount = 7250.00;
			   	break;
			   	
		   } break;  
		    default : printf("Invalid Type of room \n");
	break;   
	}
fullamount = amount * NoOfDays;

switch (RewardCardType){
	case 'G' : 
	finalamount = fullamount - (fullamount* 12.5/100);
	break;
	
	case 'S' : 
	finalamount = fullamount - (fullamount* 11.5/100);
	break;
	
	case 'B' : 
	finalamount = fullamount - (fullamount* 9.5/100);
	break;
	
}
printf("Amount(Rs.): %.2f \n\n", finalamount);
printf("Enter the Type of room: ");
	scanf("%d", &typeOfRoom);
	
}
	return 0;
	
}

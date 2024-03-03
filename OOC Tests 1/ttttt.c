#include<stdio.h>
int main(void){
	int roomoption, noOfGuests, noOfdays, adoption;
	float person, charperguest, amount, amount1,totalamount;
	char hotelroom, additionaltours,tour, y, n;
	
	printf("Input Hotel Room Option: ");
	scanf("%d", &roomoption);
	
	printf("Input No Of guests: ");
	scanf("%d", &noOfGuests);
	
	printf("Input No Of Days: ");
	scanf("%d", &noOfdays);
	
	/*if(additionaltours=='y'){
		printf("Input Your Option: ");
		scanf(" %c", &adoption);*/
		
	
	
	switch (roomoption){
		case 1 :
	       	 if (0<noOfGuests || noOfGuests<=2)
	       	 	amount=45000*noOfGuests*noOfdays;
				
				else if (2<noOfGuests || noOfGuests <=5)
					amount=44000*noOfGuests*noOfdays;
			
				else if (5<noOfGuests)
				amount=43000*noOfGuests*noOfdays;
				break;
 
	    case 2 :
	       	 if (0<noOfGuests && noOfGuests<=2)
	       	 	amount=40000*noOfGuests*noOfdays;
				
				else if (2<noOfGuests && noOfGuests <=5)
					amount=38000*noOfGuests*noOfdays;
				
				else if (5<noOfGuests)
				amount=35000*noOfGuests*noOfdays;
					break;
		   
		 case 3 :
	       	 if (0<noOfGuests && noOfGuests<=2)
	       	 	amount=37500*noOfGuests*noOfdays;
				
				else if (2<noOfGuests && noOfGuests <=5)
					amount=35000*noOfGuests*noOfdays;
				
				else if (5<noOfGuests)
				amount=32000*noOfGuests*noOfdays;
				break;
				
	           	default :
				   printf("Invalid option");
				   break;	
	} 
	printf("Do you need any additional tours(y/n): ");
	scanf(" %c", &additionaltours);
	
	while(additionaltours != 'n'){
		    
	if(additionaltours=='y'){
		printf("Input Your option: ");
		scanf("%d", &adoption);
		
		switch (adoption){
			case 1: 
			amount+= 3500*noOfGuests;
			    break;
			case 2:
				amount+= 1000*noOfGuests;
				break;
			case 3:
				amount+= 1500*noOfGuests;
				break;
			case 4:
				amount+= 2000*noOfGuests;
				break;				
	}
		
	}
	else {
            printf("Invalid option\n");
    }
	printf("Do you need any additional tours(y/n): ");
	scanf(" %c", &additionaltours);
}		
	printf("Total Price: %.2f",amount);
		   
	
return 0;	
}



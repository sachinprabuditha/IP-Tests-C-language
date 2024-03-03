#include<stdio.h>
int main(void){
	int airlineopt, extraopt, seat;
	char y, n, classtype, extra;
	float economy, business, Total, amount;
	
	printf("Input Airline Option : ");
	scanf("%d", &airlineopt);
	
	printf("Class Type : ");
	scanf(" %c", &classtype);
	
	printf("Number of Seats : ");
	scanf("%d", &seat);
	
	switch(airlineopt){
		case 1: 
		  switch (classtype){
		  	case 'E':
		  		amount = 36500*seat;
		  		break;
		  	case 'B':
			  amount = 77600*seat;
			  break;
		}
		case 2: 
		  switch (classtype){
		  	case 'E':
		  		amount = 35800*seat;
		  		break;
		  	case 'B':
			  amount = 76500*seat;
			  break;
		}
		case 3: 
		  switch (classtype){
		  	case 'E':
		  		amount = 54600*seat;
		  		break;
		  	case 'B':
			  amount = 84700*seat;
			  break;
		}
		case 4: 
		  switch (classtype){
		  	case 'E':
		  		amount = 28500*seat;
		  		break;
		  	case 'B':
			  amount = 42800*seat;
			  break;	  	  	   	
		  } break;
		  default: printf("Invalid Option");
		  break;
	}
	
	printf ("Do You Need any extra services (y/n): ");
	scanf(" %c", &extra);
	
	while (extra != 'n' && extra != 'N'){
		
		if (extra == 'y' || extra == 'Y'){
			printf("Input Your Option: ");
			scanf("%d", &extraopt);
			
			switch (extraopt){
			case 1:
				amount= amount + (7800*seat);
				break;
			case 2:
				amount= amount + (1500*seat);
				break;
			case 3:
				amount= amount + (19500*seat);
				break;
			case 4:
				amount= amount + (2000*seat);
				break;
			}
		}
		else{
			printf("Invalid Option\n");
			
		}
	printf ("Do You Need any extra services (y/n): ");
	scanf(" %c", &extra);	
	}

     printf("Total Price: %.2f",amount);
return 0;	
}

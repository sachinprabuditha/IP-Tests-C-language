#include<stdio.h>
int main(void){
	int pizzaOpt, toppingOpt, noOfPizza;
	float P, M, L, charge;
	char des, size, extratop;
	
	printf("Input Pizza Option: ");
	scanf("%d", &pizzaOpt);
	
	printf("Size of The Pizza(P/M/L): ");
	scanf(" %c", &size);
	
	printf("Number of Pizza: ");
	scanf("%d", &noOfPizza);
	
	switch (pizzaOpt){
		case 1:
			switch (size){
				case 'P':
			      charge= 560*noOfPizza;
			        break;
			    case 'M':
			      charge= 920*noOfPizza;
			        break;
			    case 'L':
			      charge= 1800*noOfPizza;
			        break;    
		}
		case 2:
			switch (size){
				case 'P':
			      charge= 340*noOfPizza;
			        break;
			    case 'M':
			      charge= 660*noOfPizza;
			        break;
			    case 'L':
			      charge= 1300*noOfPizza;
			        break;    
		}
			
		case 3:
			switch (size){
				case 'P':
			      charge= 760*noOfPizza;
			        break;
			    case 'M':
			      charge= 1100*noOfPizza;
			        break;
			    case 'L':
			      charge= 2100*noOfPizza;
			        break;    
		} 	break;
		default: printf("Invalid Option\n");
		break;	
	}
	
	printf("Do you need any extra topping(y/n):");
	scanf(" %c", &extratop);
	
	while (extratop != 'n'){
		
		if(extratop == 'y'){
			printf("Input Your Option: ");
			scanf("%d", &toppingOpt);
			
		switch(toppingOpt){
			case 1:
				charge += 320*noOfPizza;
				break;
			case 2:
				charge += 140*noOfPizza;
				break;
			case 3:
				charge += 130*noOfPizza;
				break;		
			case 4:
				charge += 150*noOfPizza;
				break;
	}
}
		else {
		
			printf("Invalid Option\n");
	}
		printf("Do you need any extra topping(y/n):");
	    scanf(" %c", &extratop);

	}
	printf("Total Price: %.2f",charge);
		   	
return 0;
}

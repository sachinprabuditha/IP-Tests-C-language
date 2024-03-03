#include<stdio.h>
int main(void){
	int itemCode;
	float price, total=0;
	char CType;
	
	printf("Please input the customer type: ");
	scanf(" %c", &CType);
	
	printf("\nItem code: ");
	scanf("%d", &itemCode);
	
	if (itemCode>=-1){
		
		while (itemCode!= -1){

	      printf("Price: ");
	      scanf("%f", &price);
			
             if (CType=='L'){
				switch (itemCode){
					case 1:
						total += price - price* 7/100;
						break;
					case 2:
						total += price - price* 5/100;
						break;
					case 3:
						total += price - price* 8/100;
						break;
					default: 
					    total += price;
						break;			
				}
			}
			
			 
			else if (CType=='N'){
				switch (itemCode){
					case 1:
						total += price + (price* 5/100);
						break;
					case 2:
						total += price + (price* 3/100);
						break;
					case 3:
						total += price + (price* 6/100);
						break;
					default: 
					    total += price;
						break;	
		}
	}
		else{
				printf("Invalid customer type\n");
	    }
	    
	printf("\nItem code: ");
	scanf("%d", &itemCode);
}
}

printf("Total Bill: %.2f", total);
return 0;

}


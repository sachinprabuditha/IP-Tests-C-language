#include<stdio.h>
int main(void){
	int itemCode;
	float price, total;
	char CuType;
	
	printf("Please input the customer type: ");
	scanf(" %c", &CuType);
	
	printf("\nItem code: ");
	scanf("%d", &itemCode);
	
	
	
	if(itemCode>=-1)
	{
		while (itemCode != -1)
		{
			printf("Price: ");
	        scanf("%f", &price);
	        
	        if(CuType=='L'){
	        	switch(itemCode){
	        		case 1:
	        			total= price - price*7/100;
	        			break;
	        		case 2:
	        			total= total+price - price*5/100;
	        			break;
					case 3:
	        			total= total+price - price*8/100;
	        			break;
					default: 
					    total = price;
						break;			
				}
			}
			else if(CuType=='N'){
				switch(itemCode){
	        		case 1:
	        			total= total+price - price*5/100;
	        			break;
	        		case 2:
	        			total= total+price - price*3/100;
	        			break;
					case 3:
	        			total= total+price - price*6/100;
	        			break;
	        		default: 
					    total += price;
						break;	
			}
			
		}
		else{
			printf("Invalid Customer\n");
		}
	printf("\nItem code: ");
	scanf("%d", &itemCode);	
	}
}
	printf("Total Bill: %.2f", total);
	
return 0;	
}

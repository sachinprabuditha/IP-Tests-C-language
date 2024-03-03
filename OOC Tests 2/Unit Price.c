#include<stdio.h>
int main(void)
{
	int item, qty;
	float unitprice, total;
	
	printf("Enter item: ");
	scanf("%d", &item);
	
	while(item != -1)
	{
		printf("Enter Quantity: ");
		scanf("%d", &qty);
		
		switch(item)
		{
			case 1:
				total = total + qty * 300.25;
				break;
			case 2:
				total = total + qty * 145.50;
				break;
			case 3:
				total = total + qty * 525.00;
				break;		
		}
	printf("\nEnter item: ");
	scanf("%d", &item);
	}
	printf("Total Price to pay Rs: %.2f", total);
	
return 0;	
}

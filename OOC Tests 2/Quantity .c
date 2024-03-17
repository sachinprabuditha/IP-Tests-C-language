#include<stdio.h>
int main(void)
{
	int qunty, item;
	float total;
		
	printf("Enter item: ");
	scanf("%d", &item);
	
	while (item != -99)
	{
		printf("Enter Quantity: ");
	scanf("%d", &qunty);
		switch(item)
		{
			case 1:
			   total += qunty * 30.00;
			   break;
			case 2:
			   total += qunty * 45.00;
			   break;
			case 3:
			   total += qunty * 55.00;
			   break;      	
		}printf("\nEnter item: ");
	scanf("%d", &item);
	
	
	}
	printf("Total Price to Pay Rs: %.2f", total);
return 0;	
}

#include<stdio.h>

float calAdditionalCharges(int orderType, float subTotal);
float calTotalBill(float subTotal, float charges);

int main(void)
{
	int type;
	float taxes, subTotal, charges;
	
	printf("Enter sub total: ");
	scanf("%f",&subTotal);
	
	printf("Enter order type: ");
	scanf("%d", &type);
	
	printf("Total bill amount: %.2f", calTotalBill(subTotal, calAdditionalCharges(type, subTotal)));
	
}

float calAdditionalCharges(int orderType, float subTotal)
{
	switch(orderType)
	{
		case 1:
			return 22/100.00 * subTotal;
			break;
		case 2:
			return 12/100.00 * subTotal;
			break;
		case 3:
			return 17/100.00 * subTotal;
			break;		
	}
}

float calTotalBill(float subTotal, float charges)
{
	return subTotal + charges;
}

#include<stdio.h>
int main(void)
{
	int type, qty;
	float extra, total;
		
		printf("Enter Burger Type : ");
		scanf("%d", &type);
			
while (type<4 && type>0){

		printf("Enter Quantity : ");
		scanf("%d", &qty);
			
		switch(type)
		{
			case 1 :
				extra = qty;
				break;
			case 2 :
				extra = qty* 50.00;
				break;
			case 3 :
				extra = qty* 100.00;
				break;		
			
		}
		total = extra * 500;
		printf("Total Price  Rs: %.2f", total);
		
	printf("\nEnter Burger Type        : ");
    	scanf("%d", &type);	
	
}
		
return 0;		
}


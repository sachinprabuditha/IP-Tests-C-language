#include<stdio.h>
#include<assert.h>

float calDiscount (int time, float totAmount);
void testCalDiscount();
void displayGift(float finalTot);

int main(void)
{
	float totAmount, final, discount;
	int time;
	printf("Enter time: ");
	scanf("%d", &time);
	
	printf("Enter Total Amount: ");
	scanf("%f", &totAmount);
	
printf("Discount: %.2f", calDiscount (time, totAmount));
final = totAmount+discount; 

displayGift(final);

	
return 0;	
}

float calDiscount (int time, float totAmount)
{
		
	switch(time)
	{
		case 16 ... 19:
		if (totAmount >= 5000){
			return 10.0/100 * totAmount;	
		}
		else if(totAmount>=2500 && totAmount<5000){
			return 7.0/100 * totAmount;
		}break;
		case 20 ... 22:
		if (totAmount >= 5000){
			return 12.0/100 * totAmount;	
		}
		else if(totAmount>=2500 && totAmount<5000){
			return 9.0/100 * totAmount;
		} break;
	}
}

void testCalDiscount()
{
	assert(calDiscount (16, 5600) == 560);
	assert(calDiscount (16, 6600) == 660);
}

void displayGift(float finalTot)
{
	if(finalTot<=700)
	{
		printf("Packet of Milk");
	}
	else if(finalTot>5000 && finalTot<6999)
	{
		printf("Packet of Milk");
	}
	else if(finalTot>3000 && finalTot<4999)
	{
		printf("Packet of Milk");
	}
}

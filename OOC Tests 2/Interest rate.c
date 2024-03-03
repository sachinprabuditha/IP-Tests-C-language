#include<stdio.h>
#include<assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main(void)
{
	float amount, interestRate;
    int i;
	
	printf("Investing Amount: ");
	scanf("%f", &amount);
	
	printf("Enter Annual interest Rate(in percentage): ");
	scanf("%f", &interestRate);
	
	//printf("Interest Amount: %.2f\n", calcAnnualInterest(interestRate, amount));
	for (i=1 ; i<=5 ; i++){
		
	amount = findTotalAmount(interestRate, amount);
	printf("Total Amount year %d: %.2f\n",i, amount);
    }
return 0;	
}

float calcAnnualInterest(float interestRate, float amount)
{
	if(amount > 100000000)
	{
		return amount * interestRate/100.00 + 0.50/100;
	}
	else{
		return amount * interestRate/100.00;
	}
}

float findTotalAmount(float interestRate, float amount)
{
	return calcAnnualInterest(interestRate, amount) + amount;
	
}
void testTotalAmount()
{
	assert(calcAnnualInterest(10, 10000)==  1000 );
	assert(calcAnnualInterest(20, 10000)==  2000 );
}

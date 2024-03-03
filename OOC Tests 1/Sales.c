#include<stdio.h>
int main(void){
	int years, units, MoSales;
	float commission;
	
	printf("no of years worked: ");
	scanf("%d", &years);
	
	printf("number of units sold: ");
	scanf("%d", &units);
if(years>2)	{

	if (MoSales>100){
		commission = units*3500;
	}
	else if (MoSales>31 || MoSales<100){
		commission = units*2500.00;
	}
	else if (MoSales<=30){
		commission = units*1000;
	}
}
	printf("Commission: %.2f", commission);
	return 0;
}

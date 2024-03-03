#include<stdio.h>
int main(void){
	int no_years_worked, no_units_sold, Msales;
	float commission;
	
	printf("no of years worked: ");
	scanf("%d", &no_years_worked);
	
	printf("number of units sold: ");
	scanf("%d", &no_units_sold);
if(no_years_worked>2){
	
	if(Msales>100){
		commission = 3500*no_units_sold;
	}
	else if(Msales>31 || Msales<100){
		commission = 2500*no_units_sold;
	}
	else if(Msales<=30){
		commission = 1000*no_units_sold;
	}
	
}
printf("Commission: %.2f", commission);
return 0;
}

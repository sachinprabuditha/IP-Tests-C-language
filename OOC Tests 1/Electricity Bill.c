#include<stdio.h>
int main(void){
	int CuType, NoUnits;
	float Mcharge;
	
	printf("Customer Type: ");
	scanf("%d", &CuType);
	
	printf("Number of units: ");
	scanf("%d", &NoUnits);
	
	switch(CuType){
		case 1:	
	       if (NoUnits<= 100){
		   Mcharge = NoUnits*10;
		   printf("Monthly charge: Rs. %.2f", Mcharge);
	}
		   else {
		   	Mcharge= 100*10 + (NoUnits - 100)*30;
		   	Mcharge+= Mcharge*20/100;
		   	printf("Monthly charge: Rs. %.2f", Mcharge);
		   }break;
		case 2:	
		   if (NoUnits<= 100){
		   Mcharge = NoUnits*10;
		   printf("Monthly charge: Rs. %.2f", Mcharge);
	}
		   else {
		   	Mcharge= 100*10 + (NoUnits - 100)*30;
		   	
		   	printf("Monthly charge: Rs. %.2f", Mcharge);
		   }break;

	default:
	printf("Invalid Customer Type");
}
	return 0;
}

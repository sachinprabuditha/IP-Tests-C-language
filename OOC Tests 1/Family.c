#include<stdio.h>
int main(void){
	int noOfChildren,additional,option;
	char instype, fi;
	float family, individual, instalment, amount;
	
	
	option = 'y';
	
	while (option != 'n' && option != 'N'){
		if (option =='y' || option =='Y'){
			
			printf("\n\nInsurance Type : ");
			scanf(" %c", &instype);
			
			if (instype != 'A' && instype != 'N' && instype != 'D' && instype != 'S'){
				printf("Invalid Insurance Type !");
				break;
			}
		
	}
	printf("Family or Individual (F/I): ");
	scanf(" %c", &fi);
	
	
	if(fi== 'I'){
	
	switch(instype){
		case 'A':
			amount= 4500;
			break; 
		case 'N':
			amount= 3100;
			break;
		case 'D':
			amount= 3600;
			break;
		case 'S':
			amount= 3300.00;
			break;	
		default: printf("Invalid Insurance Type");
		break;			
			}			
	}
	
	else if(fi=='F'){
		printf("No Of children: ");
		scanf("%d", &noOfChildren);
		
		additional= noOfChildren-2;
		
		if(additional<0)
		additional=0;
		
	switch(instype){
		case 'A':
			amount= (5200.00+ 5200.00*10/100* additional);
			break; 
		case 'N':
			amount= (4300.00+ 4300.00*(10/100)* additional);
			break;
		case 'D':
			amount= (4800.00+ 4800.00*(10/100)* additional);
			break;
		case 'S':
			amount= 3800.00+ (3800.00*10/100* additional);
			break;	
		default: printf("Invalid Insurance Type !");
		break;			
			}			
}
	
printf("Total Amount : %.2f", amount);
}
printf("\n Do you want to continue : ");
scanf(" %c", &option);	
	return 0;
}

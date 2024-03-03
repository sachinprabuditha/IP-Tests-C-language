#include<stdio.h>
int main(void)
{
	int num, i, j,k;
	
	while(1){
	
	printf("Enter Number: ");
	scanf("%d", &num);
	
	
		if (num>0){
			for(i=1; i<=num ; i++){
				for(j=1; j<=i; j++){
					for(k=1;k<=i;k++){
						printf("%d", i);
					}puts("");
				}  puts("");
			} break;
		} 
		else{
			printf("Invalid Number");
			
	}continue;
	}
}

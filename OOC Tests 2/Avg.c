#include<stdio.h>
int main(void)
{
	int marks, i;
	float avg, total;
	
	for(i=1; i<=5 ; i++){
	
    printf("Input the mark number %d: ", i);
    scanf("%d", &marks);
    
    if(marks >100 || marks <0){
    	printf("Invalid input!\n");
    	i--;
	}
	else{
		total += marks;
	}
    
} 
avg= total/5;
    printf("\nAverage of the 5 marks is : %.2f", avg);	
	
	
return 0;	
}

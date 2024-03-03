#include<stdio.h>
int main(void)
{
	int marks, i=1;
	float avg, total;
	
	while(i<=5){
	
    printf("Input the mark number %d: ", i);
    scanf("%d", &marks);
    
    if(marks >100 || marks <0){
    	printf("Invalid input!\n");
    	i--;
	}
	else{
		total += marks;
	}
   i++; 
} 
avg= total/5;
    printf("\nAverage of the 5 marks is : %.2f", avg);	
	
	
return 0;	
}

#include<stdio.h>
int main (void)
{
	int marks, minMarks, maxMarks;
	
	printf("Input Marks: ");
	scanf("%d", &marks);
	
	minMarks = marks;
	maxMarks = marks;
	
	while(marks != -99)
	{
		while(marks>100 || marks<0)
		{
			printf("Invalid Marks\n");
			
			printf("Input Marks: ");
	        scanf("%d", &marks);
		}
		
		if(minMarks > marks)
		{
			minMarks = marks;
		}
		else if(maxMarks < marks)
		{
			maxMarks = marks;
		}
		printf("Input Marks: ");
	    scanf("%d", &marks);
	}
	printf("Minimum Marks: %d\n", minMarks);
	printf("Maximum Marks: %d", maxMarks);
	
return 0;	
}

#include<stdio.h>
int main(void)
{
	int mark, mark1, mark2, mark3, mark4, totmarks;
	char cont;
	
	do{
		printf("Enter the marks of Student 1(between 0-20)\n", mark);
		
		printf("\t Mark 1- ");
		scanf("%d", &mark1);
		
		printf("\t Mark 2- ");
		scanf("%d", &mark2);
		
		printf("\t Mark 3- ");
		scanf("%d", &mark3);
		
		printf("\t Mark 4- ");
		scanf("%d", &mark4);
		
		printf("\t Total marks- %d", mark1+mark2+mark3+mark4);
		
		printf("\nDo you want to enter mark of another student (y/n)? ");
	    scanf(" %c", &cont);
		
		mark++;
	}
	while (cont=='y' && cont=='Y');
	
			printf("Enter the marks of Student 1(between 0-20)\n", mark);
			
			printf("\t Mark 1- ");
		scanf("%d", &mark1);
		
		printf("\t Mark 2- ");
		scanf("%d", &mark2);
		
		printf("\t Mark 3- ");
		scanf("%d", &mark3);
		
		printf("\t Mark 4- ");
		scanf("%d", &mark4);
		
		printf("\t Total marks- %d", mark1+mark2+mark3+mark4);
		
		printf("\nDo you want to enter mark of another student (y/n)? ");
	    scanf(" %c", &cont);
		
		mark++;
	
	
return 0;	
}

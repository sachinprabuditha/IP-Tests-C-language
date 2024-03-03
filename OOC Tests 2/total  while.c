#include <stdio.h>

int main (void)
{
	int m1,m2,m3,m4,i=1, tot;
	char conti;
	
	printf("Enter the marks of Student 1(between 0-20)\n", i);
		
		printf("\t mark 1 - ");
		scanf("%d", &m1);
		
		printf("\t mark 2 - ");
		scanf("%d", &m2);
		
		printf("\t mark 3 - ");
		scanf("%d", &m3);
		
		printf("\t mark 4 - ");
		scanf("%d", &m4);
		
		printf("\tTotal marks- %d\n", m1+m2+m3+m4);
		
		printf("\nDo you want to enter mark of another student (y/n)? ");
	    scanf(" %c", &conti);
	
 while (conti=='y' || conti=='Y'){
		
		printf("Enter the marks of Student 2(between 0-20)\n", i);
		
		printf("\t mark 1 - ");
		scanf("%d", &m1);
		
		printf("\t mark 2 - ");
		scanf("%d", &m2);
		
		printf("\t mark 3 - ");
		scanf("%d", &m3);
		
		printf("\t mark 4 - ");
		scanf("%d", &m4);
		
		printf("\tTotal marks- %d\n", m1+m2+m3+m4);
		
		printf("\nDo you want to enter mark of another student (y/n)? ");
	    scanf(" %c", &conti);
		
	}
	
return 0;	
}

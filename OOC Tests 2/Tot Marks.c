#include<stdio.h>
int main(void)
{
	int std, marks, m1, m2, m3, tot;
	
	printf("How many students are in the module : ");
	scanf("%d", &std);
	
	printf("Enter the marks of Student 1(between 0-10)\n");
	
	printf("\tmark 1 - ");
	scanf("%d", &m1);
	
	printf("\tmark 2 - ");
	scanf("%d", &m2);
	
	printf("\tmark 3 - ");
	scanf("%d", &m3);
	
	printf("\tTotal marks - %d\n", m1+m2+m3);

while (std == 2 ){
	
	printf("Enter the marks of Student 2(between 0-10)\n");
	
	printf("\tmark 1 - ");
	scanf("%d", &m1);
	
	printf("\tmark 2 - ");
	scanf("%d", &m2);
	
	printf("\tmark 3 - ");
	scanf("%d", &m3);
	
	printf("\tTotal marks - %d", m1+m2+m3);
	break;
}
	
	
return 0;	
}

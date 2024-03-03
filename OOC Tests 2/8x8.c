#include<stdio.h>
void multiply(int num, int range);

int main(void)
{
	int num, range;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	printf("Enter the range: ");
	scanf("%d", &range);
	
	multiply(num, range);
	
return 0;	
}

void multiply(int num, int range)
{
	int i;
	
	for (i=1; i<=range; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}
}

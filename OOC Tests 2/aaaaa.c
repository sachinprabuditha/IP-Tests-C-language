#include<stdio.h>
int main(void)
{
	int i, j;
	char letter = 'a';
	
	for (i=5 ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf("%c", letter);
		}puts("");
		letter++;
	}
return 0;	
}

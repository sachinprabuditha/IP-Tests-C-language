#include<stdio.h>
int main(void)
{
	int i,j,k, num=1;
	
	for(i=1 ; i<=2 ; i++)
	{
		for(j=1 ; j<=2 ; j++)
		{
			for(k=1 ; k<=2 ; k++){
				printf("[%d %d %d]", i, j, k);
				puts("");
			}num++;
		}
	}
	
}

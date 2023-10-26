// Pogram in c for nestling of loops.

#include<stdio.h>
int main()
{
	int i, j;
	for(j=0; j<=8; j++)
	{
		for(i=0; i<=5; i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}

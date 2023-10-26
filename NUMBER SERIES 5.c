//Program in c for display the series: 2 4 8 16 32 ......(n times)

#include <stdio.h>
int main()
{
	int i,j,n,po;
	i=1;
	j=1;
	printf("Enter no of terms");
	scanf("%d", &n);
	while(j<=n)
	{
		po=pow(2,i);
		printf("%d ", po);
		i++;
		j++;
	}
}

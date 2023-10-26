//Program in c for display the series: 2 4 16 256 ......(n times)

#include <stdio.h>
int main()
{
	int i,j,n;
	i=2;
	j=1;
	printf("Enter no of terms");
	scanf("%d", &n);
	while(j<=n)
	{
		printf("%d" , i);
	    i=i*i;
	    j++;
	}
}


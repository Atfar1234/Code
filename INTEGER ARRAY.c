// Program in c to input an integers array from the user and display the same

#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf(" Enter the size of the integers array ");
	scanf("%d",&n);
	printf(" Enter the value of the integer array ");
	for(i=0; i<=n; i++)
	{
		scanf("%d", &a[i]);
    }
    
    {
       printf("%d", &a[i]);
	}
}

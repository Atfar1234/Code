//Program in c to display the gratest of two numbers

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	if(a>b)
	{
		printf(" A is greater");
		printf("\n BMW IS BEST");
	}
	else
	if(a<b)
	{
		printf(" B is greater");
		printf("\n STILL BMW IS BEST");
	}
	else
	printf("both are equal");
	return 0;

}

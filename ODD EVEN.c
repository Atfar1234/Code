//Program in c to check wheter a number is odd or even

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a<0)
	printf("Number is negative");
	else if(a>0)
	printf("Number is positive");
	else
	printf("number is 0\n");
	printf(" NOTHING");
}


//Program in c to check wheter a number is positive or negative 

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
	printf("Number is 0\n");
	printf(" NOTHING");
}


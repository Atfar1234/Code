//program in c to swap two numbers (without using third variable)

#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter two integers \n ");
	scanf("%d%d" , &x, &y);
	printf("values of x and y before swapping %d%d \n" , x, y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("values of x and y after swapping %d%d" , x, y);
	
	return 0;
}

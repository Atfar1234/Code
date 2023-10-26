//program in c to swap two numbers

#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Enter two integers ");
	scanf("%d%d" , &x, &y);
	printf("values of x and y before swapping %d%d " , x, y);
	z=x;
	x=y;
	y=z;
	printf("values of x and y after swapping %d%d " , x, y);
	
	return 0;
}


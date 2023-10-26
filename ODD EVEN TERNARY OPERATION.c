// program in c to check wheter a number is odd or even ( use ternary operator).

#include <stdio.h>

int main ()
{
	int x;
	printf("Enter an integer ");
	scanf("%d" , &x);
	
	x%2==0? printf("The entered value is even"): printf("The values is odd");
	
	return 0;
}


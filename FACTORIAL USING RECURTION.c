// Find factorial of a number using recurtion 

#include<stdio.h>
int fact(int);

int main()
{
	int n, ans;
	printf("Enter the number whose factorial you want to calculate");
	scanf("%d",&n);
	ans=fact(n);
	printf("Factorial of %d is %d",n,ans);
}

int fact(int n)
{
	if(n!=1)
	{
		return n=fact(n-1);
	}
	else
	{
	     return 1;
	}
}

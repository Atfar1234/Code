 #include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number ");
	scanf("%d",&a);
	printf("enter second number ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a is greater");
		printf("\nI am the best");
	}
	else
	if(a<b)
	{
		printf("b is greater");
		printf("\nI am dull");
	}
	else
	printf("both are equal");
	return 0;

}

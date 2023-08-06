//program in c to diplay content of an charecter array.
#include<stdio.h>
int main()
{
	char a[100],i;
	printf("enter what you want to reverse  ");
     for(i=0;i<=5;i++)
     scanf("%c",&a[i]);
	
	
	
	
	for(i=5;i>=0;i--)
	{ 
		printf("%c",a[i]);
	}
	
}

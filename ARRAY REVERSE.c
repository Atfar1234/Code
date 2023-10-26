// Program in c to dispaly content of a integer array in reverse order 

#include<stdio.h>
int main()
{
	char a[5]= {1, 2, 3, 4, 5};
	int i;
	for(i=4; i>=0; i--)
	{
		printf("%d", a[i]);
	}
}

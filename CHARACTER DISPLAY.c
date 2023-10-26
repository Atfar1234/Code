// Program in c to dispaly content of a character array

#include<stdio.h>
int main()
{
	char a[6]= { 'P', 'A', 'R', 'U', 'L', '\0'};
	int i;
	for(i=0; i<=6; i++)
	{
		printf("%c", a[i]);
	}
}

// Program in c to dispaly content of a character array 

#include<stdio.h>
int main()
{
	char a[9]= {'M', 'E', '-', '2', '2', '-', '0', '2', '\0'};
	int i;
	for(i=0; a[i]!='\0'; i++)
	{
		printf("%c", a[i]);
	}
}

// Program in c demonstrating the use of string library functiond , strlen(),strrev(),strcat()

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b;
	int count, i , len;
	printf("Enter your name");
	scanf("%s",&a);
	printf("The length of the string is %d \n", strlen(a));
	printf("Reverse : %s", strrev(a));
	strcpy(b,a);
}

#include<stdio.h>
int main()
{
	char a[100];
	int count,i;
	count=0;
	printf("enter your string ");
	
	 scanf("%s",&a);
	 for(i=0;a[i]!='\0';i++)
	 {
	 count++;
		 }	
		 
	for(i=count-1;i>=0;i--)	 
	{
	
	 printf("%d",a[i]);
	 }
}

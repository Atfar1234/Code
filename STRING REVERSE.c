// Program in c to input a string from the user and find the length and display the same

#include<stdio.h>
int main()
{ 
 char a[100];
 int count, i;
 count=0;
 printf("Enter your name");
 scanf("%s", &a);
 
 for(i=0; a[i]!='\0'; i++)
 {
 	count++;
 }
 for(i=count-1; i>=0; i--)
 {
 printf("%c", a[i]); 
 }
 	
}


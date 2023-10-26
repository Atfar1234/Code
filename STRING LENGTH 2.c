// Program in c to input a string from the user and find the length and display the same

#include<stdio.h>
int main()
{ 
 char a[100];
 printf("Enter your name");
 scanf("%s", &a);
 int i;
 for(i=0; a[i]!='\0'; i++)
 {
  printf("%s",a[i]); 
 }

}

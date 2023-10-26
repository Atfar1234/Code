// Program in c to input a string from the user and copy , reverse , find length , concatinate the same 

#include<stdio.h>
int main()
{ 
 char a[100] , b[100];
 int count, i, len;
 printf("Enter your name");
 scanf("%s", &a);
 
 // Finding length:
 printf("The length of the string is %d \n", strlen(a));
 
 // Copying :
 strcpy(b,a);
 printf("Copy is: %s \n", b);
 
 // reverse the string:
 printf("Reverse: %s \n", strrev(a));
 
 // Concatinate:
 printf("After concatination: %s \n", strcat(a,b));
}

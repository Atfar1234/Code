//program in c to find product of first n natural numbers
#include<stdio.h>
int main ()
{ 
 int i , n , product;
 product = 1;
 printf ("Enter value of n ");
 scanf ("%ds", &n);
 
 for (i=1; i<=n; i++)
 {
 	 product=product*i;
 }
 printf("%d" , product);
}

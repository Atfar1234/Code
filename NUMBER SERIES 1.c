//Program in to display the series : 1 1 2 3 5 8 13 21.......n terms
#include<stdio.h>
int main ()
{
 int a,b,c,n,i;
 a=1;
 b=1;
 printf ("Enter no of terms to be displayed ");
 scanf ("%d", &n);
 printf("%d %d" , a,b);
 
 for (i=1; i<=n-2; i++)
 {
 	 c=a+b;
 	 printf("%d " , c);
 	 a=b;
 	 b=c;
 }
}

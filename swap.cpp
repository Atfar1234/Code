#include<stdio.h>
int main()
{
int a;
int b;
int c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("Before swapping a=%d and b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nafter swapping a is %d and b is %d",a,b);
}


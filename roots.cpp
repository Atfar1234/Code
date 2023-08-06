#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	float root1;
	float root2;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	d=sqrt(4*a*c);
	root1= (-b+d)/2*a;
	root2= (-b-d)/2*a;
	if(d<0)
	printf("roots are imaginary");
	else 
	printf("roots are real and  are %f and %f",root1,root2);
	return 0;
}

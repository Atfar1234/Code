#include<stdio.h>
#include<math.h>
int main() 
{
	int a,d,n,i,sum;
	printf("Enter the first number of the A.P. series: ");
	scanf("%d",&a);
	printf("Enter the total numbers in the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	printf("Sum of the series A.P. is %d: ",&sum);
	
	return 0;
}

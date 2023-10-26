// Program in c to search an array using functions
#include<stdio.h>
int array_search(int [], int, int);

int main()
{
	int a[]={1,3,2,21,30};
	int x, n, l;
	n=5;
	printf("Enter the value you wants to find");
	scanf("%d",&x);
	l=array_search(a,x,n);
	
	if (l==1)
	  printf("YES IT IS HERE");
	else
	  printf("OOPS NOT FOUND");
}

int array_search(int arr[], int number, int size)
{
	int i, flag=0;
	for (i=0; i<=size; i++)
	{
		if(number==arr[i])
		{
			flag=1;
			break;
		}
	}
	return flag;
}

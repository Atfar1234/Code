// Program in c to add two matrices
#include<stdio.h>

int main()
{
	int a[10][10], b[10][10] , c[10][10];
	int m, n;
	int i,j, temp;
	printf("Enter number of rows of the matrix");
	scanf("%d", &m);
	printf("Enter number of coloumns of the matrix");
	scanf("%d", &n);
	printf("Enter the elements of the matric 1 (row-wise) \n");
	
	//Read values and store in matrix:
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the elements of the matrix 2 (row-wise) \n");
	
	//Read values and store in matrix:
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	//Add the two matrix:
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			c[i][j]= a[i][j] + b[i][j];
		}
	}
	//Display the matrix 1:
	printf("\nMatrix 1 is: \n");
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	//Display the matrix 2:
	printf("\nMatrix 2 is: \n");
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
    }
	//Display the resultant matrix:
	printf("\n\nThe Matrix is: \n");
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
    }
	
}

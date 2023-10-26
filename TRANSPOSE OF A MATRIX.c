//Program in c to find transpose of a matrix.

#include<stdio.h>
int main()
{
	int a[10][10];
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

	//Calculate the transpose:
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
		    //Swapping:
		     if(i<j)
		    {
			 temp=a[i][j];
			 a[i][j]=a[j][i];
			 a[j][i]=temp;	    
			}
		}
	}
	
	//Display the resultant matrix:
	printf("\n\nThe Matrix is: \n");
	for (i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
    }
	
}


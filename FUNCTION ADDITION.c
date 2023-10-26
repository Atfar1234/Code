// Program in c to add two integers by using functions

#include<stdio.h>
int add(int, int);    // Function declaretion

int main()
{ 
  int ans;
  ans=add(2,3);      // Call
  printf(" THE SUM YOU WANT  IS %d" , ans);
}
// Function definition
int add(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

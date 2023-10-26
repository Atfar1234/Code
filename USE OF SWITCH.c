//use of switch 

#include<stdio.h> 
int main()
{
	
int sw;
printf("Enter 1 for My Name , 2 for Instagram account , 3 for My Best friend's name ");
scanf("%d", &sw);

switch(sw)
 {
   case 1 : 
   printf("PARUL YADAV");
   break;
   case 2 :
   printf("Parul.v2");
   break;
   case 3: 
   printf("Musaib");  
   break;
   default:
   printf("incorrect option");

 }

}
 





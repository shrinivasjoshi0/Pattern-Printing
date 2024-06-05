/*
Enter the no.of rows : 5
*
***
*****
*******
*********
*/



#include <stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter the no.of rows : ");
 scanf("%d" , &n);
 int i = 0 ;
 int j = 0 ;
 int k = 0 ;
 int a = 1 ;

 for(i=1 ; i<=n ; i++)
 {
   for(j=1 ; j<= a ; j++)
   {
    printf("*");
    
   }
   a = a + 2 ;
printf("\n");
 }
 
}
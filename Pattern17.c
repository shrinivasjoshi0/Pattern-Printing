/*
Enter No.of Rows : 5
*****
 ****
  ***
   **
    *
*/


#include<stdio.h>

int main()
{
 int n = 0 ;
 int a = 0 ;
 int i = 0 ;
 int j = 0 ;
 int k = 0 ;
 
 printf("Enter No.of Rows : ");
 scanf("%d" , &n);

int spaces =0 ;
int star = n ;

 for(i=1 ; i<=n ; i++)
 {
   for(j=1 ; j<=spaces ; j++)
   {
    printf(" ");
   }
   for(k=1 ; k<=star ; k++)
   {
    printf("*");

   }
   spaces++;
   star-- ;
 printf("\n");
 }

}
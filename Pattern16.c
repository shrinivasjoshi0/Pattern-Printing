/*
Enter No.of Rows : 5
  *
 ***
*****
 ***
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
if(n%2==0)
{
  n++;
}
int spaces = n/2 ;
int star = 1 ;
int mid = n/2+1 ;

 for(i=1 ; i<=n ; i++)
 {
   for(j=1 ; j<=spaces ; j++) // for spaces
   {
      printf(" ");
   }
   for(k=1 ; k<=star ; k++) // for stars
   {
      printf("*");
   }   
   if(i < mid)
   {
    spaces-- ;
    star = star+2 ;

   }
   else
   {
    spaces++ ;
    star = star - 2 ;
   }
   printf("\n");




 } 




  return 0 ;
}


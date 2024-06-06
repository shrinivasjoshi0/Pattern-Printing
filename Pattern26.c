/*
Enter no.of Rows  : 4
1
2 3
4 5 6
7 8 9 10
*/


#include<stdio.h>

int main()
{
 int iRow = 0 ;
 int iCol = 0 ;
 int iNo = 0 ;
 int digit = 1 ;
 printf("Enter no.of Rows  : ");
 scanf("%d" , &iNo);

 for(iRow=1 ; iRow<=iNo ; iRow++)
 {
   for(iCol=1 ; iCol<=iRow ; iCol++)
   {
    printf("%d " ,digit);
    digit++ ;
   }
   printf("\n");
 }

}
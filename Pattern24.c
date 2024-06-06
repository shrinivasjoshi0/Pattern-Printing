/*
Enter no.of Rows  : 5
1
AB
123
ABCD
12345
*/


#include<stdio.h>

int main()
{
 int iRow = 0 ;
 int iCol = 0 ;
 int iNo = 0 ;
 char ch = '\0' ;
 printf("Enter no.of Rows  : ");
 scanf("%d" , &iNo);

 for(iRow=1 ; iRow<=iNo ; iRow++)
 {
    for(iCol=1 ; iCol<=iRow ; iCol++)
    {
        if(iRow%2 !=  0)
        {
            printf("%d" , iCol);
        }
        else
        {
            ch = (char)(iCol+64);
            printf("%c" , ch);
        }
    }
    printf("\n");
 }
  


    return 0 ;
}
/*
Enter No.of Rows : 4
*********
**** ****
***   ***
**     **
*       *

2 * n+1 ;
2 * 4+1 = 9


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

int spaces =1 ;
int star = n ;
for(int z=1 ; z<=2*n+1 ; z++) // first line sathi
{                             // *********
    printf("*");
}
printf("\n");
 for(i=1 ; i<=n ; i++)
 {
    for(j=1 ; j<=star ; j++) // for star
    {
        printf("*");
    }
    for(k=1 ; k<=spaces ; k++) // for spaces
     {
        printf(" ");
     }
     
    for(j=1 ; j<=star ; j++) // for star
    {
        printf("*");
    }
     star-- ;
     spaces = spaces+2 ;
     printf("\n");
 }
}
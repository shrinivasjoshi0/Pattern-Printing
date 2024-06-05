/*
Enter the no.of rows : 5
    1
    121
    12321
    1234321
    123454321
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
    int z = i-1 ;
    for(int space=1 ; space<=n-1 ; space++)
    {
        printf(" "); 
    }
  for(j=1 ; j<=i ; j++)
  {
    printf("%d" , j);

  }
  for(k=1 ; k<=i-1 ; k++)
  {
    printf("%d" , z);
    z-- ;
  }

printf("\n");

 }
}
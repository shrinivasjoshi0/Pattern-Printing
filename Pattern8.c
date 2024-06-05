/*
Enter no.of rows : 5
  *
  *
*****
  *
  *
*/

#include<stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter no.of rows : ");
 scanf("%d" , &n);
for(int i = 1 ; i<= n ; i++)
{
    for(int j = 1 ; j<= n ; j++)
    {
        int mid = n/2+1 ; 
        if(i==mid || j==mid)
        {
            printf("*");
        }
        else
        printf(" ");
    }
    printf("\n");
}
}
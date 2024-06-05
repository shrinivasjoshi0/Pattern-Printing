/*
Enter the no.of rows : 5
# # # # *
# # # * *
# # * * *
# * * * *
* * * * *
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
 int a = 0 ;

 for(i=1 ; i<=n ; i++)
 {
    for(j=1 ; j<=n-i ; j++)
    {
        printf("# ");

    }
    for(k=1 ; k<=i ; k++)
    {
        printf("* ");
    }
    printf("\n");
 }
}
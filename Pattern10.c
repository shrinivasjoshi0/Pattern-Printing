/*
Enter no.of rows : 4
1
2       3
4       5       6
7       8       9       10

*/

#include <stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter no.of rows : ");
 scanf("%d" , &n);
int a = 1 ;
 for(int i = 1 ; i<=n ; i++)
 {
    for(int j =1 ; j<=i ; j++)
    {
        printf("%d\t" , a);
        a++ ;
    }
    printf("\n");
 }
}
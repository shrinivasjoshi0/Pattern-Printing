/*
Enter no.of rows : 5
1
12
123
1234
12345

*/



#include<stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter no.of rows : ");
 scanf("%d" , &n);

 for(int i = 1 ; i<=n ; i++)
 {
    int a = 1 ;
    for(int j=1 ; j<=i ; j++)
    {
        printf("%d" , j);
        a = a+2 ;
    }
    printf("\n");


 }
}
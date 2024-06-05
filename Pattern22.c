/*
Enter No.of Rows : 4
1111111
1222221
1233321
1234321
1233321
1222221
1111111
*/


#include<stdio.h>

int main()
{
 int n = 0 ;
 int a = 0 ;
 int b = 0 ;
 int i = 0 ;
 int j = 0 ;
 int k = 0 ;
 int min = 0 ;
 printf("Enter No.of Rows : ");
 scanf("%d" , &n);

for(i=1 ; i<=2*n-1 ; i++)
{
   for(j=1 ; j<=2*n-1 ;j++)
   {
    a = i;
    if(i>n)
    {
        a = 2*n-i ;
    }
    b = j;
    if(b>n)
    {
        b = 2*n-j ;
    }
    if(a<b)
    {
        min = a ;
    }
    else
    {
        min = b ;
    }
    printf("%d" , min);

   }
   printf("\n");

}
}
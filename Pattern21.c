/*
Enter No.of Rows : 4
1111
1222
1233
1234

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

for(i=1 ; i<=n ; i++)
{
   for(j=1 ; j<=n ;j++)
   {
    if(i<j)
    {
        printf("%d" , i);
    }
    else 
    {
        printf("%d" , j);
    }
    
   }
   printf("\n");

}
}
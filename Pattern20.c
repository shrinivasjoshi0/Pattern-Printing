/*
Enter No.of Rows : 4
123456789
1234 6789
123   789
12     89
1       9
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
{                             // 123456789
    printf("%d" , z);
}
printf("\n");
 for(i=1 ; i<=n ; i++)
 {int a=1 ;
    for(j=1 ; j<=star ; j++) // for star
    {
        
        printf("%d" , a);
        a++ ;
    }
    for(k=1 ; k<=spaces ; k++) // for spaces
     {
        printf(" ");
        a++ ;
     }
     
    for(j=1 ; j<=star ; j++) // for star
    {
        printf("%d" , a);
        a++ ;
    }
     star-- ;
     spaces = spaces+2 ;
     printf("\n");
 }
}
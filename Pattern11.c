/*
Enter no.of rows : 4
1
0       1
1       0       1
0       1       0       1

*/

#include <stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter the no.of rows : ");
 scanf("%d" , &n);
 int i = 0 ;
 int j = 0 ;
 int a = 0 ;

 for(i=1 ; i<=n ; i++)
 {
  if(i % 2 != 0)
    a=1 ;
       else
           a=0 ;

    for(j=1 ; j<=i ; j++)
    {
        printf("%d\t" , a);
        if(a==1)
        a = 0 ;
      else
       a = 1 ;
    }
    printf("\n");
 }
   



    return 0 ;
}


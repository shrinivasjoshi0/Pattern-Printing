/*
Enter no.of rows : 4
1       3       5       7
1       3       5       7
1       3       5       7
1       3       5       7


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
  for(int j = 1 ; j<=n ; j++)
  {
 printf("%d\t" , a);
  a = a + 2;
}
printf("\n");
}


  return 0 ;
}
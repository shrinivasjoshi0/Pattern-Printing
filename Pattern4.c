/*
Enter no.of rows : 4
ABCD
ABCD
ABCD
ABCD


*/
#include<stdio.h>

int main()
{
 int n = 0 ;
 printf("Enter no.of rows : ");
 scanf("%d" , &n);
for(int i = 1 ; i<= n ; i++)
{
    int a = 1 ;
  for(int j = 1 ; j<=n ; j++)
  {
    int d = a + 64 ; // d = 65
    char ch = (char)d ;// ch=(char)65 -> ch= 'A'
    printf("%c" , ch);
    a++ ;
  }
printf("\n");
}
}
/*
Enter a Number : 8
2       4       6       8       10      12      14      16
*/
#include<stdio.h>
void Display(int iNo)
{
  int icnt = 0 ;
  int no = 0 ;
  
  for(icnt=1 ; icnt<=iNo ; icnt++)
  {
    no = no + 2 ;
    printf("%d\t" , no);

  }
}

int main()
{
 int iValue1=0 ;

 printf("Enter a Number : ");
 scanf("%d" , &iValue1);

 Display(iValue1);

 return 0 ;
}

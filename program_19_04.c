/*
Enter a Number : 4
#       1       *       #       2       *       #       3       *       #       4       *
*/
#include<stdio.h>
void Display(int iNo)
{
  int icnt = 0 ;
  
  for(icnt=1 ; icnt<=iNo ; icnt++)
  {
    printf("#\t%d\t*\t", icnt);

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

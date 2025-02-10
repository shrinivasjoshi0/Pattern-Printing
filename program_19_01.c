/*
Enter a Number : 4
A       B       C       D
*/
#include<stdio.h>
void Display(int iNo)
{
  int icnt = 0 ;
  char ch = 'A' ;
  for(icnt=1 ; icnt<= iNo ; icnt++)
  {
    printf("%c\t" , ch);
    ch++ ;
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
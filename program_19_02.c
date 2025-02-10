/*
Enter a Number : 4
4       #       3       #       2       #
*/
#include<stdio.h>
void Display(int iNo)
{
  int icnt = 0 ;
  
  for(icnt=0 ; icnt<=(iNo*2) ; icnt++)
  {
    printf("%d\t#\t", iNo);
    iNo-- ;
    if(iNo<0)
    break ;
    
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
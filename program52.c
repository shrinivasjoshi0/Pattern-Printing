/*
    Input : Row = 4 Col = 4
    a   a   a   a
    b   b   b   b
    c   c   c   c
    d   d   d   d    
*/


#include<stdio.h>


void Display(int irow ,int icol)
{ 
    int i = 0 ;
    int j = 0 ;
    char ch = 'a' ;
  
    for(i=0 ; i<irow ; i++)
    {
        for(j=0 ; j<=icol ; j++)
        {
            printf("%c\t" , ch);
            ch++ ;
        }
        printf("\n");   
    }

    


}

int main()
{
  int ivalue1 = 0; 
  int ivalue2 = 0 ;

  printf("Enter Rows : ");
  scanf("%d" , &ivalue1);
  
  printf("Enter Colums : ");
    scanf("%d" , &ivalue2);

   Display(ivalue1,ivalue2);

    return 0 ;
}
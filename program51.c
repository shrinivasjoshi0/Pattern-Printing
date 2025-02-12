// Input : 5
// Output : a   b   c   d   e
#include<stdio.h>

void Display2(int ino)
{

int icnt = 0 ;
char ch = 'a' ; 

if(ino>26)
{
    printf("Invalid input\n");
    return ;
}

for(icnt=1 ; icnt<=ino ; icnt++)
{
    printf("%c\t" , ch);
    ch++ ;
}

printf("\n");



}


void Display1(int ino)
{

int icnt = 0 ;
char ch = '\0' ; 

if(ino>26)
{
    printf("Invalid input\n");
    return ;
}

for(icnt = 1, ch = 'A'; icnt <= ino; icnt++, ch++)
{
    printf("%c\t" , ch);
    
}

printf("\n");

}

int main()
{
    int iValue = 0;
    int a  = 1 ;
    int b = 2 ;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("What you want CAPITAL or small\n");
    printf("1 for Capital and 2 for small\n");
    scanf("%d" , &a);
    scanf("%d" , b);

     if(iValue == 1)
     {
        Display1(iValue);
     }
     else if(iValue == 2)
     {
        Display2(iValue);
     }
     else{
        printf("Invalid input");
         return -1;
         }
            return 0;
}
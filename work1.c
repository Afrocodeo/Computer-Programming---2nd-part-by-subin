#include<stdio.h>
int func(char n)
{
    if(n>=48&&n<=57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
   char a='3',b='b';
   int c=func(a);
   printf("%d",c);
    return 0;
}

#include<stdio.h>
#include<string.h>

char string(char s[],int l)
{

     while(l>=0)
     {
        if(l==strlen(s))
        {
            return string(s,l-1);
        }
        else
        {printf("%c",s[l]);
         return string(s,l-1);
        }
     }
}

int main()
{
    char s[10];
    scanf("%s",&s);
    int l=strlen(s);
    printf("%s",string(s,l));


    return 0;
}

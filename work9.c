#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",&a);
    int l=strlen(a);
    int i,c=0;
    for(i=0;i<l;i++)
    {
        if(a[i]=='1')
        {
            c++;
        }
    }
    printf("Number of 1: %d",c);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n&(n-1);
    if(x==0)
    {
        printf("power of 2");
    }
    else
    {
        printf("no power of two");
    }
    return 0;
}

#include<stdio.h>

int sum(int n)
{

    while(n>0)
    {

        return n+sum(n-1);

    }

}


int main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("sum : %d",s);
    return 0;
}

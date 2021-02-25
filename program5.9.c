#include<stdio.h>
int main()
{
    int n,cot,i;
    scanf("%d",&n);
    cot = 0;

    while(n)
    {
        if(n&1)cot++;
        n=n>>1;
    }
    printf("Number of 1:%d\n",cot);
    return 0;
}

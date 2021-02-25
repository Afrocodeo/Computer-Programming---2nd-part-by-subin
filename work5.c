#include<stdio.h>

int permutation(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
    return n*permutation(n-1);
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n,k;
    n=sizeof(a)/sizeof(a[0]);
    //printf("%d",n);
    k=permutation(n);
    printf("%d",k);
    return 0;
}

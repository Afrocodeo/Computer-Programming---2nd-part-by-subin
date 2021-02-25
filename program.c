#include<stdio.h>
int main()
{
    int x=10,y;
    int *p,*q;

    p=&x;
    y=*p;
    *p=15;

    printf("hello world");
     *q = 20;
     printf("hello world");
    return 0;
}

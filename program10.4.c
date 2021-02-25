
#include<stdio.h>
int add(int a, int b)
{
    return a * b;
}

int main()
{
    int length,i,sum=0,tmp;
    printf("Enter number of integer");
    scanf("%d",&length);

    if(DEBUG)printf("----\nDEBUG\n\tNumber of integers:%d\n,ENDDEBUG\n---\n",length);

    for(i=0;i<length;i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&tmp);
         if(DEBUG)printf("----\nDEBUG\n\tNumber of integers:%d\n,ENDDEBUG\n---\n",length);
        printf("Number %d = %d\n",i+1,tmp);
        sum=add(sum,tmp);
         if(DEBUG)printf("----\nDEBUG\n\tNumber of integers:%d\n,ENDDEBUG\n---\n",length);
    }

    printf("The average is %lf\n",(double)sum/length);

    return 0;
}

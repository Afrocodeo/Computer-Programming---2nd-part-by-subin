#include<stdio.h>
int main()

{
    int arr[]={1,2,4,6,7,8,9};
    int i,n=7,orrr=0,kaku=0;
    for(i=0;i<n;i++)
    {
        orrr++;
        if(arr[i]^orrr)
        {
            printf("Missing number: %d",orrr);
            break;
        }
    }
     for(i=0;i<n;i++)
    {
        kaku++;
        if(kaku==orrr)
        {
            kaku++;
        }
        if(arr[i]^kaku)
        {
            printf("Missing number: %d",kaku);
            break;
        }
    }
}

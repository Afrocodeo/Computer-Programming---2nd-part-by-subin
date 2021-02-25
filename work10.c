#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,6,7};
    int i,n=6,orrr=0;
    for(i=0;i<n;i++)
    { orrr++;
        if(arr[i]^orrr)
        {
            printf("Missing number: %d",orrr);
            break;
        }
    }
    return 0;
}

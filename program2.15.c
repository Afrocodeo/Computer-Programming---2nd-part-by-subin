#include<stdio.h>
int main()
{
    char c = 'A';
    char *o;

    o=&c;

    printf("Address of c : %p\n",o);
    printf("Address of o : %p\n",&o);

}

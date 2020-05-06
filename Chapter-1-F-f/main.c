#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l=1189,b=841,n=0,m;
    printf("Sizes of paper are:\n");
    while(n<9)
    {
        printf("A%d= %d x %d \n",n,l,b);
        l=l/2;
        m=b;
        b=l;
        l=m;

        n++;
    }
}

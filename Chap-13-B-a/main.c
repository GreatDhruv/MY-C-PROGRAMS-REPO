#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[]={1,2,3,4,5,6};
    int temp[6];
    for(i=0;i<=5;i++)
    {
        printf(" %d",array[i]);
    }
    for(i=0;i<=5;i=i+2)
    {
        temp[i+1]=array[i];
    }
    for(i=1;i<=5;i=i+2)
    {
        temp[i-1]=array[i];
    }
    printf("\n");
     for(i=0;i<=5;i++)
    {
        printf(" %d",temp[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,rows,x,r;
    printf("Enter no of rows\n");
    scanf("%d",&rows);
    //i=rows-n
    for(r=rows;r>=1;r--)
{
    for(n=rows-1;n>=0;n--)
    {
        printf("\t");
    }
    for(x=rows-n;x<=rows;x++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}

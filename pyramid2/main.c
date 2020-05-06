#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,n,i;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        n=i;
        for(n=n;n>=1;n--)
        {
          printf("*");
        }
        printf("\n");

    }

    return 0;
}

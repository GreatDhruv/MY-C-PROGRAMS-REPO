#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        n=i;
        while(n>0)
        {
            printf("*");
            n--;
        }
        printf("\n");

    }
    return 0;
}

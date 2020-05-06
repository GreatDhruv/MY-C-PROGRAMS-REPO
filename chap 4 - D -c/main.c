#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter length of sides of triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        printf("Triangle is possible");

    }
    else
    {
        printf("Triangle is not possible");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter three numbers\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is the greatest no",a);
    }
     if(c>b&&c>a)
    {
        printf("%d is the greatest no",c);
    }
     if(b>a&&b>c)
    {
        printf("%d is the greatest no",b);
    }
    return 0;
}

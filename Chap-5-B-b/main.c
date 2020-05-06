#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,num;
    printf("Enter any number\n");
    scanf("%d",&y);

    num=1;
    while(y>=1)
    {

        num=num*y;
        y--;
    }

        printf("%d\n",num);


    return 0;
}

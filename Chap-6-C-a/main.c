#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,div;
    for(i=2;i<=300;i++)
    {
        for(num=2;num<=i;num++)
        {
            div=i%num;
            if(div==0)
                break;

        }
         if (num==i)
            printf("%d is a prime number\n",num);

    }

    return 0;
}

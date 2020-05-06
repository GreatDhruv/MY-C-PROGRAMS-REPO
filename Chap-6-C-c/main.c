#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("I will print combinations of 1,2 and three like a boss, because I can.\n");
    int a,b,c;
    for(a=1;a<=3;a++)
    {
       for(b=1;b<=3;b++)
       {
           for(c=1;c<=3;c++)
           {
               printf("%d%d%d\n",a,b,c);
           }
       }
    }

    return 0;
}

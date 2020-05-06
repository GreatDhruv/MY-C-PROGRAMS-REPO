#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,p,c;
    m=21;
    while(1)
    {
        printf("Pick up 4 or 3 or 2 or 1 matches\n");
        scanf("%d",&p);
        m=m-c;
        printf("No. of matches left: %d\n",m);
        c=5-p;
        printf("Computer picks %d matches",c);
        m=m-c;
        printf("No. of matches left: %d\n",m);
        if(m==1)
            printf("You lost ");


    }


    return 0;
}

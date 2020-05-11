#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=0,neg=0,zero=0,i,x=0;
    char z;
    while (x<2)
    {
        fflush(stdin);
        printf("Enter y to enter a number or enter n to Exit\n");
        scanf("%c",&z);
        if(z=='y')
        {
            printf("enter a number\t");
            scanf("%d",&i);
            if(i>0)
                pos++;
            if (i<0)
                neg++;
            if (i==0)
                zero++;
        }
        else if(z=='n')
            break;
        else
            continue;
    }
    printf("Positive:%d  Negative:%d  Zero:%d\n",pos,neg,zero);
    return 0;
}

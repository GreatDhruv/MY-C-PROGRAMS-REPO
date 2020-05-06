#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0,fac=1,x,z;
    for(i=1;i<=7;i++)
    {
        fac=1;
        for(z=i;z<=i;z++)
        {
            fac=fac*z;
            printf("%d is factorial\n",fac);
        }
        x=i/(fac);
        printf("%d/%d is the value\n",i,fac);
        sum=sum+x;
        printf("sum for one loop %d\n",sum);

    }
    printf("sum is %d\n",sum);

    return 0;
}

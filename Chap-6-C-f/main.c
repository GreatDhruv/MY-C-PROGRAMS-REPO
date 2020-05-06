#include <stdio.h>
#include <math.h>

int main()
{
    int p,q,r,x,n,z;
    float a,y;

    for(x=1;x<=10;x++)
    {
        printf("Enter values of Principal(p),times principal is compounded(q)\n annual rate(r)and number of years (n)to find final value(a)\n");
        scanf("%d%d%d%d",&p,&q,&r,&n);
        y=p*(1+r/q);
        z=n*q;
        a=pow(y,n);
        printf("y is %f \n z is %d \n a is %f ",y,z,a);
    }

    return 0;
}

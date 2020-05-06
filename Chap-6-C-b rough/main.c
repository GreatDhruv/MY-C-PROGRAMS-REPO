#include <stdio.h>
#include <stdlib.h>
int factorial(int x);

int main()
{
    int n,d;
    float sum,z;
    printf("Seven terms\n");
    for(n=1;n<=7;n++)
    {
        z=n/d;
        d=factorial(n);
        printf("z=%d/%d\n",n,d);
        sum=sum+z;
    }
    printf("Sum of seven terms %f",sum);

    return 0;
}

int factorial(int x)
{
    int b,fac=1;
    for(b=1;b<=x;b++)
    {
        fac=fac*b;

    }
    return fac;
}





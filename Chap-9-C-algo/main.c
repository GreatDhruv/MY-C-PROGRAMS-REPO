#include <stdio.h>
#include <math.h>
float fac(float);

int main()
{
    float n,x;
    float y,sum=0;
    printf("Enter value of angle in radians\n");
    scanf("%f",&x);
    int z=1;
    for(n=1;n<=19;n=n+2)
    {
        y=pow(x,n)/fac(n);
        printf("Value of y %f\n",y);
        printf("fac is %f\n",fac(n));
        if(z%2==0)
        {
            sum=sum-y;
        }
        else
        {
            sum=sum+y;
        }
        printf("sum is %f\n",sum);
        z++;//this was important,forgot to increment z,thats why sum was only increasing.

    }
    printf("sin(x) is %f\n",sum);
    return 0;
}
float fac(float n)
{
    float i,fac=1;
    for(i=1;i<=n;i++)
    {
        fac=fac*i;

    }
    return fac;
}

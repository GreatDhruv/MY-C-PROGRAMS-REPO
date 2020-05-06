#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    printf("Enter two numbers a and b respectively \n");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    d=pow(b,a);

    printf("a raised to the power b is %d \n b raised the the power a is %d",c,d);

    return 0;
}

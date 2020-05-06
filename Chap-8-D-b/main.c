#include <stdio.h>
#include <stdlib.h>

int power(int a,int b);

int main()
{
    int a,b,result;
    printf("Enter two numbers a and b\n");
    scanf("%d%d",&a,&b);
    result=power(a,b);
    printf("%d is a to the power b",result);

    return 0;
}
int power(int a,int b)
{
    int result=1;

    while(b>=1)
    {
        result=result*a;
        b--;
    }
    return result;
}

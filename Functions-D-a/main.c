#include <stdio.h>
#include <stdlib.h>
int factorial(int num);

int main()
{
    int num,fac;
    printf("Enter a number\n");
    scanf("%d",&num);
    fac=factorial(num);
    printf("Factorial is %d \n",fac);
    return 0;
}

int factorial(int num)
{
    int fac=1;
    while(num>=1)
    {
        fac=fac*num;
        num--;
    }
    return fac;
}

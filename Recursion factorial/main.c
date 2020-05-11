#include <stdio.h>
#include <stdlib.h>
int fac(int);

int main()
{
    int a,c;
    printf("Enter a number to find it's factorial\n");
    scanf("%d",&a);
    c=fac(a);
    printf("factorial is %d",c);
    return 0;
}
int fac(int x)
{
    int f=1;



    if(x==1)
    {
        return 1;
    }
    else
    {
       f=x*fac(x-1);
    }
    return f;

}

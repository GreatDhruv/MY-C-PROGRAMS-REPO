#include <stdio.h>
#include <stdlib.h>
void divisor(int,int,int *);
void swap(int *,int *);

int main()
{
    int a,b,div;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        swap(&a,&b);
    }
    divisor(a,b,&div);
    printf("Greatest Common Divisor is %d",div);

    return 0;
}
void divisor(int a,int b,int *d)
{
    int y,x;
    while(1)
    {
        x=a/b;
        y=a-b*x;
        if(y==0)
        {
            break;
        }

        a=b;
        b=y;
    }
    *d=b;
}
void swap(int *a,int *b)
{
    int d;
     d=*a;
    *a=*b;
    *b=d;
}

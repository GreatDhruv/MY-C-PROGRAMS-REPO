#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,m,d,c,l,x,v,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    m=num/1000;
    num=num%1000;

    d=num/500;
    num=num%500;

    c=num/100;
    num=num%100;

    l=num/50;
    num=num%50;

    x=num/10;
    num=num%10;

    v=num/5;
    num=num%5;

    i=num;

    printf("The number in Roman Numerals is\t");

    while(m>=1)
    {
        printf("M");
        m--;
    }

    while(d>=1)
    {
        printf("D");
        d--;
    }

    while(c>=1)
    {
        printf("C");
        c--;
    }

    while(l>=1)
    {
        printf("L");
        l--;
    }

    while(x>=1)
    {
        printf("X");
        x--;
    }

    while(v>=1)
    {
        printf("V");
        v--;
    }

    while(i>=1)
    {
        printf("I");
        i--;
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
void areafunc(int,int,int,int *,int *);

int main()
{
    int a,b,c,area,s;
    printf("Enter length of three sides\n");
    scanf("%d%d%d",&a,&b,&c);
    areafunc(a,b,c,&area,&s);
    printf("Area is %d\n",area);
    printf("S is %d",s);
    return 0;
}
void areafunc(int a,int b,int c,int *ar,int *sp)
{
    *sp=(a+b+c)/2;
    *ar=sqrt(*sp*(*sp-a)*(*sp-b)*(*sp-c));
}

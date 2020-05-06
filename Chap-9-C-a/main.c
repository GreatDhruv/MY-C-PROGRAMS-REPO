#include <stdio.h>
#include <stdlib.h>
void func(int,int,int,int,int,int *,float *);

int main()
{
    int a,b,c,d,e,sum;
    float avg,dev;
    printf("Enter 5 numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    func(a,b,c,d,e,&sum,&avg);
    printf("Sum is %d\n",sum);
    printf("Average is %f",avg);
    return 0;
}
void func(int a,int b,int c,int d,int e,int *sum,float *avg)
{
    *sum=a+b+c+d+e;
    *avg=*sum/5;
}

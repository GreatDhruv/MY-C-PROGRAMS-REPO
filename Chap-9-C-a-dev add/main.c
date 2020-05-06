


#include <stdio.h>
#include <math.h>
void func(float,float,float,float,float,float *,float *,float *);

int main()
{
    float a,b,c,d,e,sum;
    float avg,dev;
    printf("Enter 5 numbers\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    func(a,b,c,d,e,&sum,&avg,&dev);
    printf("Sum is %f\n",sum);
    printf("Average is %f\n",avg);
    printf("Deviation is %f",dev);

    return 0;
}
void func(float a,float b,float c,float d,float e,float *sum,float *avg,float *dev)
{
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    float x=((a-*avg)*(a-*avg)+(b-*avg)*(b-*avg)+(c-*avg)*(c-*avg)+(d-*avg)*(d-*avg)+(e-*avg)*(e-*avg));
    float y= (x*x)/5;
    *dev=sqrt(y);

}

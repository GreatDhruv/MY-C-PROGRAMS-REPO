#include <stdio.h>
#include <stdlib.h>
perc(float,float,float,float *,float *);

int main()
{
    float p,c,m,avg,per;
    printf("Enter marks of the student in Physics ,Chemistry and Maths\n");
    scanf("%f%f%f",&p,&c,&m);
    perc(p,c,m,&avg,&per);
    printf("Average is %f\n",avg);
    printf("Percentage is %f\n",per);
    return 0;
}
perc(float p,float c,float m,float *avg,float *per)
{
    *avg=(p+c+m)/3;
    *per=(*avg)/100*100;
}

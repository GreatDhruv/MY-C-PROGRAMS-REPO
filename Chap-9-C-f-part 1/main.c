#include <stdio.h>
#include <math.h>

float dist(float,float,float,float);

int main()
{
    float x1,x2,y1,y2;
    printf("Enter x1,y1 and x2,y2\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    float d=dist(x1,y1,x2,y2);
    printf("distance is %f",d);
    return 0;
}
float dist(float x1,float y1,float x2,float y2)
{
    float d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}

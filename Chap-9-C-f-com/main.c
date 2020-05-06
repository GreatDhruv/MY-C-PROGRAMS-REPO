#include <stdio.h>
#include <math.h>

float dist(float,float,float,float);
float area(float,float,float,float,float,float);

int main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("Enter three points A B and C\n");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);


    float ar=area(x1,y1,x2,y2,x3,y3);

    printf("area is %f",ar);


    return 0;
}
float dist(float x1,float y1,float x2,float y2)
{
    float d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}
float area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float a,b,c;
    a=dist(x1,y1,x2,y2);
    b=dist(x1,y1,x3,y3);
    c=dist(x2,y2,x3,y3);
    float s=(a+b+c)/2;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;

}

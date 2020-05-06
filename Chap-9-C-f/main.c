#include <stdio.h>
#include <math.h>

float dist(float,float,float,float);
int area(float,float,float,float,float,float);
int inside(float,float,float,float,float,float,float,float );

int main()
{
    float x1,y1,x2,y2,x3,y3,x,y;
    int z;
    printf("Enter three points A B and C\n");
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
    int ar=area(x1,y1,x2,y2,x3,y3);
    printf("area is %f\n",ar);
    printf("Enter x,y\n");
    scanf("%f%f",&x,&y);
    z=inside(x1,y1,x2,y2,x3,y3,x,y);
    printf("Point is inside is 1/point is outside is 0.Result is %d\n",z);



    return 0;
}
float dist(float x1,float y1,float x2,float y2)
{
    float d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}
int area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float a,b,c;
    a=dist(x1,y1,x2,y2);
    b=dist(x1,y1,x3,y3);
    c=dist(x2,y2,x3,y3);
    float s=(a+b+c)/2;
    int ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;

}
int inside(float x1,float y1,float x2,float y2,float x3,float y3,float x,float y)
{
    int a,b,c,f,z;
    a=area(x1,y1,x2,y2,x,y);
    b=area(x1,y1,x3,y3,x,y);
    c=area(x2,y2,x3,y3,x,y);
    f=area(x1,y1,x2,y2,x3,y3);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    printf("c is %d\n",c);
    printf("f is %d\n",f);

    if((a+b+c)==f)
    {
         z=1;
    }
    else
    {
    z=0;
    }

    return z;
}


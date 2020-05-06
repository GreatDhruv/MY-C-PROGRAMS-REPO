#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter sides of the triangle:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
           if((a==b)&&(b==c))
     {
         printf("triangle is equilateral\n");
     }
    if(((a==b)||(b==c)||(c==a))&&!((a==b)&&(b==c)))
        {
            printf("Triangle is isoceles\n");

        }
    if( a==sqrt(pow(b,2)+pow(c,2))||b==sqrt(pow(a,2)+pow(c,2))||c==sqrt(pow(b,2)+pow(a,2)))
    {
        printf("Triangle is right angle triangle\n");
    }
     if((a!=b)&&(b!=c))
     {
         printf("Triangle is scalene\n");
     }
    }
    else{
        printf("triangle is not possible\n");
    }
    return 0;
}

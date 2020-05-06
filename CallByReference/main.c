#include <stdio.h>
#include <stdlib.h>

void areaperi(int,float *,float *);

int main()
{
    int radius;
    float area,perimeter;
    printf("Enter radius of the circle\n");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area is %f \nPerimeter is %f\n",area,perimeter);
    return 0;
}
void areaperi(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;

}

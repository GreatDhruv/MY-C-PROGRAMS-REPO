#include <stdio.h>
#include <stdlib.h>

int main()
{

 int x,y,z;
    printf("Enter x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    rotate(&x,&y,&z);
    printf("x,y,z are %d %d %d",x,y,z);
    return 0;
}
void rotate(int *x,int *y,int *z)
{
   int a,b,c;
   a=*x;
   b=*y;
   c=*z;
   *y=a;
   *z=b;
   *x=c;
}

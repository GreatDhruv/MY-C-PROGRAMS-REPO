#include <stdio.h>
#include <stdlib.h>
void rotate(int *,int *,int *);

int main()
{
    int x,y,z;
    printf("Enter x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    rotate(&x,&y,&z);
    printf("x,y,z are %d %d %d",x,y,z);
    return 0;
}
void rotate(int *a,int *b,int *c)
{
    int d;
    d=*a;
    *a=*c;
    *c=*b;
    *b=d;


}


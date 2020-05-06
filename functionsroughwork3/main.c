#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int sum=addTwoResults(a,b);
    printf("Sum of two numbers is %d",sum);
    return 0;
}
int addTwoResults(int x,int y){
    int sum=x+y;
    return sum;
}

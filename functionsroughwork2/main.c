#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("I will add two numbers now.\n");
    addTwoNumbers();
    return 0;
}
addTwoNumbers()
{
    int a,b,sum;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of these two numbers is %d",sum);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second;
    printf("Adding two numbers using functions\n");
    printf("Enter two numbers\n");
    scanf("%d%d",&first,&second);
    addTwoNumbers(first,second);

    return 0;
}
addTwoNumbers(int a,int b){
int sum =a+b;
printf("%d is sum of two numbers",sum);
}

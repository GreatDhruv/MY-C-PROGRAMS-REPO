#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,avg;
    int marks[3];
    for(i=0;i<=2;i++)
    {
        printf("Enter a number\n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=2;i++)
    {
        sum=sum+marks[i];
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d",sum/3);


    return 0;
}

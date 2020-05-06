#include <stdio.h>
#include <stdlib.h>
void leap_Year(int x);

int main()
{
    int x;
    printf("Enter a year\n");
    scanf("%d",&x);
    leap_Year(x);


    return 0;
}
void leap_Year(int year)
{
    int y=(year%4);
    if(y==0)
    {
        printf("Leap Year\n");
    }
    else{
        printf("Not a leap year");
    }
}

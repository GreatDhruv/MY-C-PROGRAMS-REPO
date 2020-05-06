#include <stdio.h>
#include <math.h>

/*
int main()
{
    int num,sum=0,x;
    double y;
    printf("Enter number\n");
    scanf("%d",&num);
     while(num>0)
      {
        x = num%10;
        y = pow(x,3);
        printf("Output of y : %lf\n",y);
        sum = sum + y;
        num = num/10;
      }
      printf("Sum of cubes of digits is %d",sum);
    return 0;
    */
    int main()
{
    int num,sum=0,x,y;
    printf("Enter number\n");
    scanf("%d",&num);
     while(num>0)
      {
        x = num%10;
        y = x*x*x;
        printf("Output of y : %d\n",y);
        sum = sum + y;
        num = num/10;
      }
      printf("Sum of cubes of digits is %d",sum);
    return 0;
    //Answer is in ArmstrongNum
}


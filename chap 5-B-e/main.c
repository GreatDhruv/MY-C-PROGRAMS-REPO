#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,i=1,z,x,y;

    while(i<500)
    {
      num = i;

      while(num>0)
       {
        x = num%10;
        y = x*x*x;
        printf("value of y is %d\n",y);
        sum = sum+y;
        num = num/10;
        printf("value of sum is %d\n",sum);

       }
      printf("Sum of cubes of digits is %d\n",sum);
      if (sum ==i)
        {
            printf("%d is an Armstrong number\n",i);
        }
       i++;
       sum=0;
    }
//Answer is in ArmstrongNumberTest
    return 0;
}

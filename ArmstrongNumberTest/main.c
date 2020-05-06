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

        sum = sum+y;
        num = num/10;
       }
      if (sum == i)
        {
            printf("%d is an Armstrong number\n",i);
        }
       i++;
       sum=0;//The mistake was that the value of sum had to be set to 0 after every loop ended,because the sum of the loops kept adding up too
    }

    return 0;
}

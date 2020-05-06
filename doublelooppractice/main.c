#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,x,y;
    printf("Enter number\n");
    scanf("%d",&num);
     while(num>0)
      {

        x=num%10;
        num=num/10;
        sum=sum+x;
      }
      printf("Sum of digits is %d",sum);

    return 0;
}

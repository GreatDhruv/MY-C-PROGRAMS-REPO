#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos=0,neg=0,zero=0,num,z=0;
    char i;

    while(z<5)
    {
    printf("Enter y to enter more numbers on or enter n to exit\n");
    scanf("%c",&i);
    if(i=='y')
    {
       printf("Enter a number \n");
       scanf("%d",&num);
       if(num>0)
       {
           pos++;

       }
       else if(num<0)
       {
           neg++;

       }
       else if(num==0)
       {
           zero++;

       }

    }


       else if(i=='n')
       {
           break;
       }



    }

     printf("%d is the number of positive numbers entered\n",pos);
     printf("%d is the number of negative numbers entered\n",neg);
     printf("%d is the number of zeros entered\n",zero);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    {
    int pos=0,neg=0,zero=0,num,z;
    char i;
    printf("Enter y to enter a number else press n\n");
    scanf("%c",i);
    while(z=='y')
    {
       printf("Enter a number\n");
       scanf("%d",&num);
       if(num>0)
       {
           pos++;

       }
       if(num<0)
       {
           neg++;

       }
       if(num==0)
       {
           zero++;

       }

    }

     printf("%d is the number of positive numbers entered\n",pos);
     printf("%d is the number of negative numbers entered\n",neg);
     printf("%d is the number of zeros entered\n",zero);
    return 0;
}
/*{
    int pos=0,neg=0,zero=0,num,z=0;
    char i;

    while(z<5)
    {
       printf("Enter a number \n");
       scanf("%d",&num);
       if(num>0)
       {
           pos++;

       }
       if(num<0)
       {
           neg++;

       }
       if(num==0)
       {
           zero++;

       }
       printf("Enter y to go on or enter n\n");
       scanf("%c",&i);
       if(i=='y')
       {
           continue;
       }
       if(i=='n')
       {
           break;
       }

    }

     printf("%d is the number of positive numbers entered\n",pos);
     printf("%d is the number of negative numbers entered\n",neg);
     printf("%d is the number of zeros entered\n",zero);



    return 0;
}*

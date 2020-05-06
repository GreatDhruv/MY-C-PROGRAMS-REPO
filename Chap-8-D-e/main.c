#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,x,n,y;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        x=num%i;
        if(x==0)
        {
            for(n=2;n<=i;n++)
            {
                y=i%n;
                if(y==0)
                {
                    break;
                }
            }
                    if(n==i)
                    {
                        printf("%d is a prime factor\n",i);
                    }
                    else
                        {
                            printf("%d is a factor\n",i);
                        }
        }
    }

    return 0;
}

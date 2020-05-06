#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,fac,x,n,num,i;

do{
    printf("\tMENU DRIVEN PROGRAM\t\n");
    printf("1.Factorial of a number\n");
    printf("2.Prime or not\n");
    printf("3.Odd or even\n");
    printf("4.Exit\n");
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Choose an option\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        fac=1;
        for(n=num;n>=1;n--)
        {

            fac=fac*n;

        }
        printf("Factorial is %d\n",fac);

    break;
    case 2:
        for(i=2;i<=num;i++)
        {
            x=num%i;
            if(x==0) {
              break;
            }
        }
        if(i==num)
            printf("Prime number\n");
        else
            printf("Not a prime Number\n");
            break;
    case 3:
        x=num%2;
        if(x==0)
         printf("Even Number");
         else
            printf("Odd number");
         break;
    case 4:


        break;
    default:
        printf("Invalid Choice\n");
    }
}while(choice!=4);
    return 0;
}

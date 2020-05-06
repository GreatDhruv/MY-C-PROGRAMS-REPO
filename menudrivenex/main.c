#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\tMenu Driven Program!\n\n");
    int choice;
    char isTerminated = 'N';
    int first, second;
    do {
       choice = first = second = 0;
       printf("\t******Calculator Menu********\n");
       printf("\t1. Addition of two number.\n");
       printf("\t2. Subtraction of two number.\n");
       printf("\t3. Multiplication of two number.\n");
       printf("\t4. Division of two number.\n");
       printf("\n\n");
       printf("\tEnter Your Choice : ");
       scanf("%d", &choice);
       printf("\n");
       switch(choice){
           case 1:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               int sum = (first + second);
               printf("\n");
               printf("\tSum of two number : %d\n\n", sum);
            break;
             case 2:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               int sub = (first - second);
               printf("\n");
               printf("\tDifference of two number : %d\n\n", sub);
            break;
             case 3:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               int mul = (first*second);
               printf("\n");
               printf("\tProduct of two number : %d\n\n", mul);

            break;
             case 4:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               int div = (first/second);
               printf("\n");
               printf("\tDivision of two number : %d\n\n", div);
            break;
             default:
                printf("\tWrong choice ");

            break;
       }
       fflush(stdin);
       printf("\tDo You Want To Continue Program ?(Press Y) : ");
       scanf("%c", &isTerminated);
       printf("\n\n\n");
    }while(isTerminated == 'Y' || isTerminated == 'y');

    return 0;
}

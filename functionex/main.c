#include <stdio.h>
#include <stdlib.h>

/*
* This function add two numbers.
*/
void addTwoNumbers(){
    int first, second;
    printf("\tEnter first number : ");
    scanf("%d", &first);
    printf("\tEnter second number : ");
    scanf("%d", &second);
    int sum = (first + second);
    printf("\n");
    printf("\tSum of two number : %d\n\n", sum);
}

int subTwoNumbers() {
    int first, second;
    printf("\tEnter first number : ");
    scanf("%d", &first);
    printf("\tEnter second number : ");
    scanf("%d", &second);
    int sub = (first - second);
    return sub;
}

int multiplyTwoNumbers() {
    int first, second;
    printf("\tEnter first number : ");
    scanf("%d", &first);
    printf("\tEnter second number : ");
    scanf("%d", &second);
    int mul = (first*second);
    return mul;
}

int divisionOfTwoNumbers() {
    int first, second;
    printf("\tEnter first number : ");
    scanf("%d", &first);
    printf("\tEnter second number : ");
    scanf("%d", &second);
    int div = (first/second);
    return div;
}


int main()
{
    printf("\t\tMenu Driven Program!\n\n");
    int choice;
    char isTerminated = 'N';
    int sum_result, sub_result, mul_result, div_result;
    do {
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
               addTwoNumbers();
            break;
             case 2:
               sub_result = subTwoNumbers();
               printf("\n");
               printf("\tDifference of two number : %d\n\n", sub_result);
            break;
             case 3:
               mul_result = multiplyTwoNumbers();
               printf("\n");
               printf("\tMultiplication of two number : %d\n\n", mul_result);
            break;
             case 4:
               div_result = divisionOfTwoNumbers();
               printf("\n");
               printf("\tDivision of two number : %d\n\n", div_result);
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

#include <stdio.h>
#include <stdlib.h>

/*
* This function add two numbers.
* num1 and num2 is called as formal argument.
*/
int addTwoNumbers(int num1, int num2){
    int sum = (num1 + num2);
    //Modification in value
    num1 = num1 + 15;
    printf("Value of Num1 : %d\n\n", num1);
    return sum;
}

int subTwoNumbers(int num1, int num2) {
    int sub = (num1 - num2);
    return sub;
}

int multiplyTwoNumbers(int num1, int num2) {
    int mul = (num1*num2);
    return mul;
}

int divisionOfTwoNumbers(int num1, int num2) {
    int div = (num1/num2);
    return div;
}


int main()
{
    printf("\t\tMenu Driven Program!\n\n");
    int choice;
    char isTerminated = 'N';
    int sum_result, sub_result, mul_result, div_result;
    int first, second;
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
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               //function call with two arguments
               //Here first and second are actual arguments.
               sum_result = addTwoNumbers(first, second);
               //As per call by value : if there is a modification in formal argument there is
               //no impact on actual argument.
               printf("Value of first : %d\n", first);

               printf("\n");
               printf("\tSum of two number : %d\n\n", sum_result);
            break;
             case 2:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               //function call with two arguments
               sub_result = subTwoNumbers(first, second);

               printf("\n");
               printf("\tDifference of two number : %d\n\n", sub_result);
            break;
             case 3:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               //function call with two arguments
               mul_result = multiplyTwoNumbers(first, second);
               printf("\n");
               printf("\tMultiplication of two number : %d\n\n", mul_result);
            break;
             case 4:
               printf("\tEnter first number : ");
               scanf("%d", &first);
               printf("\tEnter second number : ");
               scanf("%d", &second);
               //function call with two arguments
               div_result = divisionOfTwoNumbers(first, second);
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

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[5];
    int i = 0;
    //Input Loop
    for (i=0; i<5; i++) {
        printf("Enter Number in position %d : \n", i);
        scanf("%d", &numbers[i]);
    }
    printf("Printing array elements\n");
    //Output Loop
    printf("Printing array in forward direction\n\n");
    printf("  [ ");
    for (i=0; i<5; i++){
       printf("%d, ", numbers[i]);
    }
    printf("]");
    printf("\n");
    printf("Printing array in backward direction\n\n");
    printf("  [ ");
    for (i=4; i>=0; i--){
       printf("%d, ", numbers[i]);
    }
    printf("]");
    printf("\n\n");
    printf("Sum of all input numbers is calculating.\n\n");
    int sum = 0;
    for (i=0; i<5; i++){
       sum = sum + numbers[i];
    }
    printf("Total Sum of all input numbers : %d\n", sum);
    return 0;
}

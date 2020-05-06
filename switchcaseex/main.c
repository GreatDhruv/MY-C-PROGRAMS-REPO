#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    printf("Switch Case Example!\n\n");
    printf("Enter number between 1 and 4.\n");
    scanf("%d", &input);
    switch(input){
        case 1:
            printf("User input is : %d\n\n", input);
            break;
        case 2:
            printf("For case 2 : User input is : %d\n\n", input);
            break;
        case 3:
            printf("For case 3 : User input is : %d\n\n", input);
            break;
        case 4:
            printf("For case 4 : User input is : %d\n\n", input);
            break;
        default:
            printf("For default : User input does not belong to 1 and 4\n\n");
    }
    return 0;
}

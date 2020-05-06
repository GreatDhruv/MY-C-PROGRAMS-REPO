#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum,numbers[5];
    printf("enter numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<5;i++){
        printf("%d   ",numbers[i]);
    }
    printf("\n");
    for(i=4;i>=0;i--)

    {
        printf("%d   \n",numbers[i]);

    }


return 0;
}

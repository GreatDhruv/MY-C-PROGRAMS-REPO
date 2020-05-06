#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,n;
    printf("MULTIPLICATION TABLE\n");
    printf("Enter a number");
    scanf("%d",&num);
    for(n=1;n<=num;n++)
    {
        printf("%d x %d =%d\n",num,n,num*n);
    }
    return 0;
}

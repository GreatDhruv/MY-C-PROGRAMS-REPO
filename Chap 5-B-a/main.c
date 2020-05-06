#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,pay,work;
    while(i<10)
    {
        printf("Enter work hours\n");
        scanf("%d",&work);
        if((work-40)>0)
        {
            printf("Overtime pay is %d\n",12*(work-40));
        }
        else {
            printf("No work means no pay,Overtime pay is 0\n");

        }
        i++;
    }

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c;
    float b;
    printf("Enter Hardness,Carbon content,Tensile Strength\n");
    scanf("%d%f%d",&a,&b,&c);
    if(a>50&&b<0.7&&c>5600)
    {


        printf("Grade 10");

    }
    else if(a>50&&b<0.7)
    {
        printf("Grade 9");

    }
    else if(b<0.7&&c>5600)
    {
        printf("Grade 8");
    }
    else if(a>50&&c>5600)
    {
        printf("Grade 7");
    }
    else if (a>50||b<0.7||c>5600)
    {
        printf("Grade 6");
    }
    else{
        printf("Grade 5");
    }
    return 0;
}

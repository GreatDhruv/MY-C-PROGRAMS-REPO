#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter weight and height\n");
    int weight;
    float bmi,height;
    scanf("%d%f",&weight,&height);
    bmi=weight/(height*height);
    printf("BMI is %f\n",bmi);
    if(bmi<15)
    {
        printf("Starvation");
    }
    else if(bmi<17.5)
    {
        printf("Anorexic");
    }
    else if(bmi<18.5)
    {;
        printf("Underweight");
    }
    else if(bmi<24.9)
    {
        printf("Ideal");
    }
    else if(bmi<25.9)
    {
        printf("Overweight");
    }
    else if(bmi<30.9)
    {
        printf("Obese");
    }
    else if(bmi>=40)
    {
        printf("Morbidly obese");
    }
    return 0;
}

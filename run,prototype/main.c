
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,g,b,x,y,z;

    printf("Enter values of colours R,G,B from 0 to 255\n");
    scanf("%f%f%f",&r,&g,&b);



        float white,cyan,magenta,yellow,black;
        //here are the formulas
        x=r/255;
        y=g/255;
        z=b/255;
        if((x>y)&&(x>z))
        {
            white=x;
        }
        if((y>x)&&(y>z))
        {
            white=y;
        }
        if((z>y)&&(z>x)){
            white=z;
        }


        cyan=(white-r/255)/white;
        magenta=(white-g/255)/white;
        yellow=(white-b/255)/white;
        black=1-white;
        printf("cyan=%f\n magenta=%f\n yellow=%f\n white=%f black=%f \n",cyan,magenta,yellow,white,black);

        return 0;
        }



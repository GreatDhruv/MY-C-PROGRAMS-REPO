#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,g,b,x,y,z;

    printf("Enter values of colours R,G,B from 0 to 255\n");
    scanf("%f%f%f",&r,&g,&b);

    if((r>0)&&(r<256)&&(b>0)&&(b<256)&&(g>0)&&(g<256))
    {
        float white,cyan,magenta,yellow,black;
        //here are the formulas
        x=r/255;
        y=g/255;
        z=b/255;
        if(x>y&&x>z)
        {
            white=x;
        }
        if(y>x&&y>z)
        {
            white=y;
        }
        else{
            white=z;
        }

       // white = Max(r/255,g/255,b/255)
        cyan=(white-r/255)/white;
        magenta=(white-g/255)/white;
        yellow=(white-b/255)/white;
        black=1-white;
        printf("cyan=%f\n magenta=%f\n yellow=%f\n white=%f\n black=%f\n",cyan,magenta,yellow,white,black);
    }

    else {
        printf("Enter values between 0 to 255\n");
    }
    return 0;

}





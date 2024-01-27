#include<stdio.h>
int main()
{
    float a,b,c,x,y,z,temp,area;

    scanf("%f%f%f",&a,&b,&c);

    x=a+b;
    y=b+c;
    z=a+c;

    temp= a+b+c;

    area= .5*x*c;
 if (x > c && y > a && z > b)
        printf("Perimetro = %.1f\n",temp);
    else

        printf("Area = %.1f\n",area);

    return 0;

}

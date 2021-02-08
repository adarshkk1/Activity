//WAP to find the volume of a tromboloid using 4 function

#include <stdio.h>
float input()
{
    float a; 
    printf("Enter a number\n");
    scanf("%f",&a);
    return a;
}

float find_vol(float a,float b,float c)
{
    float vol;
    vol = 1/3*((a*b*c)+(b/c));
    return vol;
}

void output(float a)
{
    printf("The result is %f",a);
}

int main()
{
    float x,y,z,vol;
    x=input();
    y=input();
    z=input();
    vol=find_vol(x,y,z);
    output(vol);
    return 0;
}

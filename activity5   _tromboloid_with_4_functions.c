//WAP to find the volume of a tromboloid using 4 function

#include <stdio.h>
float input()
{
    float a; 
    printf("Enter the value \n");
    scanf("%f",&a);
    return a;
}

float find_vol(float h,float d,float b)
{
    float vol;
    vol=((h*d*b)+(d/b))/3.0
    return vol;
}

void output(float a)
{
    printf("The Volume of the tromboloid is %f",a);
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

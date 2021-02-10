//WAP to find the volume of a tromboloid using 4 function

#include <stdio.h>
float input(char c)
{
    float a;
    printf("enter the values of %c:\n",c);
    scanf("%f",&a);
    return a;
}

float vol(float h, float d,float b)
{ 
     float vol;
     vol = 1.0/3*((h*d*b)+(d/b));
     return vol;
}

void output(float v)
{     
     printf(" Volume of the tromboloid is %f",v);
}

int main()
{
     float h,b,d,v;
     h = input('h');
     b = input('b');
     d = input('d');
     v = vol(h, b, d);
     output(v);
     return 0;
}

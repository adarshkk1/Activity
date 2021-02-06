//WAP to find the volume of a tromboloid using 4 functions

#include <stdio.h>
float input()
{
    float h;
    scanf("%f",&h);
    return h;
}

float find_vol(float h, float d,float b)
{ 
     float vol;
     vol=((h*d*b)+(d/b))/3.0;
     return vol;
}

void output(float h)
{     
     printf(" Volume of the tromboloid is %f",h);
}

int main()
{
     float x,y,z,vol;
     printf("Enter the height : \n");
     x=input();
     printf("Enter the depth : \n");
     y=input();
     printf("Enter the breadth : \n");
     z=input();
     vol=find_vol(x,y,z);
     output(vol);
     return 0;
}

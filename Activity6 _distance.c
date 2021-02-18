//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input(char a[])
{
    float c; 
    printf("Enter the value of %s \n",a);
    scanf("%f",&c);
    return c;
}

float find_distance(float x1, float x2 ,float y1,float y2)
{
    float d;
   d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}

void output(float d, float x1, float x2, float y1, float y2)
{
    printf("The distance between two points is %f \n",d);
}
int main()
{
    float x1,y1,x2,y2;
    x1=input("x1");
    x2=input("x1");
    y1=input("y1");
    y2=input("y2");
    float d=find_distance(x1,x2,y1,y2);
    output(d,x1,x2, y1,y2);
    return 0;
}

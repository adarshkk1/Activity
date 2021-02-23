//WAP to find the distance between two points using structures and 4 functions
#include<stdio.h>
#include<math.h>

struct point
{
  float x,y;
};

typedef struct point point;

point input ()
{
   point p;
   printf("enter the  value of x = ");
   scanf("%f",&p.x);
   printf ("enter the  value of y = ");
   scanf ("%f",&p.y);
   return p;
}

float distance (point p1, point p2)
{
    float dist;
    dist = sqrt(pow(((p2.x)-(p1.x)),2)+pow(((p2.y)-(p1.y)),2));
    return dist;
}

void output ( point p1, point p2,float dis)
{
    printf(" The distance between two points is : %f", dis);
}

int main()
{
    point p1,p2;
    float d;
    p1=input ();
    p2=input ();
    d= distance (p1,p2);
    output (p1,p2,d);
    return 0;
}

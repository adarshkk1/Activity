#include<stdio.h>
#include<math.h>

typedef struct coord{
	float x,y;

}coordinate;

typedef struct rect{
	coordinate p1,p2,p3;
	float area,length,breadth;
}rectangle;

 
int input()
{
int n;
printf("Enter the number of test cases :\n");
scanf("%d",&n);
return n;
}

void input_one(rectangle *p ) 
{

printf("enter the coordinates:\n");
scanf("%f %f %f %f %f %f  ", &p->p1.x,&p->p1.y,&p->p2.x,&p->p2.y,&p->p3.x,&p->p3.y);
}

void input_n(int n, rectangle  a[])
{
for(int i=0;i<n;i++)
{
	input_one(&a[i]);
}
}

void compute_one(rectangle *p)
{
	p->length=sqrt(pow((p->p1.x - p->p2.x),2) + pow((p->p1.y - p->p2.y),2));
    p->breadth=sqrt(pow((p->p1.x - p->p3.x),2) + pow((p->p1.y - p->p3.y),2));
	p->area=p->length*p->breadth;
}


void compute_n(int n , rectangle a[])
{
for(int i=0;i<n;i++)
 {
	compute_one(&a[i]);
  }
}

void output_one(rectangle *p)
 {

printf(" Area of rectangle with vertices (%f,%f),(%f,%f),(%f,%f) is %f \n", p->p1.x,p->p1.y,p->p2.x,p->p2.y,p->p3.x,p->p3.y,p->area);
 }

void output_n(int n, rectangle  a[])
{
for(int i=0;i<n;i++)
 {
	output_one(&a[i]);
 }
}

int main()
{
int n=input();
rectangle a[n];
input_n(n,a);
compute_n(n,a);
output_n(n,a);
return 0;
}

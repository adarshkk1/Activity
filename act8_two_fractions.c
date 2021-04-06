
#include<stdio.h>
struct fract
{
     int nume;
     int deno;
};
typedef struct fract fraction;
fraction input ()
{
     fraction a;
     printf("Enter the numerator \n");
     scanf("%d",&a.nume);
     
     printf("Enter the denomination\n");
     scanf("%d",&a.deno);
     return a;
}
fraction sum (fraction a, fraction b)
 {
   fraction res;
   if(a.deno==b.deno)
{
   res.deno=a.deno;
   res.nume=a.nume+b.nume;
}
else
  {
    res.deno=a.deno*b.deno;
    res.nume=(a.deno*b.deno)+(b.nume*a.deno);
   }
return res;
}
int main ()
{
      fraction a,b,c ;
      a=input ();
      b=input ();
      c=sum (a,b);
      printf("the sum is %d/%d",c.nume,c.deno);
      return 0;
}

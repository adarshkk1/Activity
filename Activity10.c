//activity 10
#include<stdio.h>
struct fract
{
    int  nume;
    int  deno;
};
typedef struct fract fraction;
fraction input()
{
    fraction a;
    printf("enter the numerator\n");
    scanf("%d",&a.nume);
    printf("enter the denominator\n");
    scanf("%d",&a.deno);
    return a;
}
fraction sum(fraction a,fraction b)
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
        res.nume=(a.nume*b.deno)+(b.nume*a.deno);
    }
    return res;
}
int main()
{
    int n;
    printf("enter the number of fractions to be add\n");
    scanf("%d",&n);
    fraction c,a[n];
    c.nume=0;
    c.deno=1;
    for(int i=0;i<n;i++)
    {
        printf("for fraction %d ",(i+1));
        a[i]=input();
    }
    for(int i=0;i<n;i++)
    {
        c=sum(c,a[i]);
    }
    printf("The Total sum is %d/%d",c.nume,c.deno);
    return 0;
}

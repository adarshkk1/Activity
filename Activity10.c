//activity 10
#include <stdio.h>
struct fraction
{
    int nume;
    int deno;
};
typedef struct fraction fract;

void input(fract array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter numerator: \n ");
        scanf("%d",&array[i].nume);
        printf("enter denominator: \n");
        scanf("%d",&array[i].deno);
    }
}

int gcd(int a, int b)
{
    int i,gcd=1;
    for(i=2; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
        gcd = i;
    }
    return gcd;
}

fract fraction(fract arr[],int n)
{
    fract sum,f;
    int Gcd;
    f.nume=arr[0].nume;
    f.deno=arr[0].deno;
    for(int i=1;i<n;i++)
    {
        sum.deno=f.deno*arr[i].deno;
        sum.nume=(f.nume*arr[i].deno)+(arr[i].nume*f.deno);
        Gcd=gcd(sum.nume,sum.deno);
        sum.deno=(sum.deno)/Gcd;
        sum.nume=(sum.nume)/Gcd;
        f=sum;
    }
    return sum;
}

void output(int n,fract array[],fract sum)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d/%d+ ",array[i].nume,array[i].deno);
    }
    printf("%d/%d = %d/%d",array[n-1].nume,array[n-1].deno,sum.nume,sum.deno);
}

int main()
{
    int n,i;
    printf("Enter the number of fractions:\n");
    scanf("%d",&n);
    fract array[n],sum;
    input(array,n);
    sum=fraction(array,n);
    output(n,array,sum);
    return 0;
} 


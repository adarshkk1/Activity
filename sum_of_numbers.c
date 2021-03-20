#include<stdio.h>
int main()
{
  int n,sum=0,a[n];
  printf("Enter the value of n : \n");
  scanf("%d",&n);
  
for(int i=0;i<n;i++)
{
printf("Enter %d number \n",(i+1));
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum is : \n %d",sum);
return 0;
}

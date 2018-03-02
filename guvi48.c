#include<stdio.h>
int main(void)
{
int n,a[50],i,sum=0,average;
printf("enter the no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
average=sum/n;
printf("%d",average);
}

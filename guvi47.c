#include<stdio.h>
void main()
{
int a[50],n,i;
printf("enter the no of elements in the array");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
int min=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("\nmin=%d\nmax=%d",min,max);
}

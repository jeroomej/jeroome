#include<stdio.h>
void main()
{
int a[20],i,n=10,max=a[0];
printf("enter 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("maximum number is %d",max);
}

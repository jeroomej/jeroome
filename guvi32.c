#include<stdio.h>
int main()
{
int a[50],h,i,m;
printf("enter the size of arr");
scanf("%d",&h);
printf("enter the array elements");
for(i=0;i<h;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=1;i<h;i++)
{
if(m>a[i])
m=a[i];
}
printf("the minimum value is %d",m);
}

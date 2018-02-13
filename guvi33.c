#include<stdio.h>
void main()
{
int a[50],s,i,m;
printf("enter the size of array");
scanf("%d",&s);
printf("enter the array elements");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
m=a[0];
for(i=1;i<s;i++)
{
if(m>a[i])
m=a[i];
}
printf("the minimum value is %d",m);
}

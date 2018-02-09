#include<stdio.h>
void main()
{
int a,b,i;
printf("enter the number");
scanf("%d",&a);
b=1;
for(i=0;i<=a;i++)
{
b=a*i;
printf("%d",b);
}
}

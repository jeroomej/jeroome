#include<stdio.h>
void main()
{
int a=1,b=1,i,n,c;
printf("enter the range of series");
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}

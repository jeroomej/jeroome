#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=0,d=0,r=0;
printf("enter the number");
scanf("%d",&a);
b=a;
while(a!=0)
{
r=r%10;
c=(r*r*r);
d=d+c;
a=a/10;
}
if(d==b)
printf("armstrong");
else
printf("not armstrong");
}

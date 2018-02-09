#include<stdio.h>
void main()
{
int a,b,c,d,e,r,i;
printf("entr the limits");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
d=0;
c=i;
while(c!=0)
{
r=c%10;
d=d+(r*r*r);
c=c/10;
}
if(d==i)
{
printf("%d",i);
}
}
}

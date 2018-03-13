#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d",&b,&c);
a=b*c;
if(a%2==0)
{
printf(" even number %d",a);
}
else
{
printf("odd number %d",a);
}
}

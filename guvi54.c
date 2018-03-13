#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d",&a);
if(a%2==0)
{
printf("nearest even number is %d",a-2);
}
else
{
printf("the nearest even number is %d",a-1);
}
}

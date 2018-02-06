#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
printf("enter the number");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
break;
}
if(a==i)
printf("prime number");
else
printf("not prime number");
}

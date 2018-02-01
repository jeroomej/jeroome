#include<stdio.h>
void main()
{
int a,b=0;
printf("enter the number");
scanf("%d",&a);
while(a !=0)
{
a/=10;
++b;
}
printf("%d",b);
}

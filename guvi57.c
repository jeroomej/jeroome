#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values a and b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swapping a=%d b=%d",a,b);
}


#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values a and b");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping a=%d b=%d",a,b);
}
